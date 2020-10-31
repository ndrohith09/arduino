#include<Wire.h>
const int MPU_addr = 0x68;
int16_t AcX, AcY, AcZ, Tmp, GyX, GyY, GyZ;
void setup() {
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B0); //PWR_MGMT_1 register
  Wire.write(0); //set to zero(wakes up the MPU 6050
  Wire.endTransmission(true);
  Serial.begin(9600);
}

void loop() {
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr, 14, true);
  AcX = Wire.read() << 8 | Wire.read(); //0x3B(ACCEL_XOUT_H) & 0x3C =(ACCEL_XOUT_L)
  AcY = Wire.read() << 8 | Wire.read(); //0x3D(ACCEL_XOUT_H) & 0x3E =(ACCEL_XOUT_L)
  AcZ = Wire.read() << 8 | Wire.read(); //0x3F(ACCEL_YOUT_H) & 0x40 =(ACCEL_YOUT_L)
  Tmp = Wire.read() << 8 | Wire.read(); //0x41(TEMP_OUT_H) & 0x42 =(TEMP_OUT_L)
  GyX = Wire.read() << 8 | Wire.read(); //0x43(GYRO_XOUT_H) & 0x44 =(GYRO_XOUT_L)
  GyY = Wire.read() << 8 | Wire.read(); //0x45(GYRO_YOUT_H) & 0x46 =(GYRO_YOUT_L)
  GyZ = Wire.read() << 8 | Wire.read(); //0x47(GYRO_ZOUT_H) & 0x48 =(GYRO_ZOUT_L)

  /*  Serial.print("AcX="); Serial.print(AcX);
    Serial.print("|AcY="); Serial.print(AcY);
    Serial.print("|AcZ="); Serial.print(AcZ);
    Serial.print("|AcX="); Serial.print(AcX);
    Serial.print("|Tmp");Serial.print(Tmp/340.00+36.53); // equation for temperature sensor in degree C
    Serial.print("|GyX");Serial.print(GyX);
    Serial.print("|GyY");Serial.print(GyY);
    Serial.print("|GyZ");Serial.print(GyZ);  */

  delay(333);
  double x = (180 / PI) * (atan(AcX / (sqrt((pow(AcY, 2) + (pow(AcZ, 2)))))));
  double y = (180 / PI) * (atan(AcY / (sqrt((pow(AcX, 2) + (pow(AcZ, 2)))))));
  double z = (180 / PI) * (atan(AcZ / (sqrt((pow(AcX, 2) + (pow(AcY, 2)))))));
  Serial.print("AcX="); Serial.print(x);
  Serial.print("AcY="); Serial.print(y);
  Serial.print("AcZ="); Serial.print(z);
}
