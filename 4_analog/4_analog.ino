void setup() {
  Serial.begin(9600);
}

void loop() {
  analogWrite(0, analogRead(2));
  analogWrite(1, analogRead(2)/4);
}
/*
  //http://zattouka.net/GarageHouse/micon/Arduino/XIAO/gaiyo.htm
  ホンモノDACは基本10bitで0pinのみ
  0pin以外のDACはPWMで8bit

  0:DAC-LED
  1:PWM-LED
  2:ADC-可変抵抗
  
  //ADC 10bit
  Serial.println(((float)analogRead(2) / 1024 * 3.3));

  //DAC 10bit
  for (int i = 0; i < 1024; i++) {
    analogWrite(0, i);
    Serial.println(((float)analogRead(2) / 1024 * 3.3));
    delay(1);
  }
  //DAC 12bit
  //setup:analogReadResolution(12);
  for (int i = 0; i < 4096; i++) {
    analogWrite(0, i);
    Serial.println(((float)analogRead(2) / 1024 * 3.3));
    delay(1);
  }

  //ADC→LED(DAC10bit)
  analogWrite(0, analogRead(2));
  
  //ADC→LED(PWM)
  analogWrite(1, analogRead(2)/4);
  
*/
