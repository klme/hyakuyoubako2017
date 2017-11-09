void setup() {
  //シリアル通信の初期化
  Serial.begin(9600) ;
}
void loop() {
  //A2ピンからセンサーの出力電圧を読込む
  int val2 = analogRead(2);
  //電圧を計算する
  float volt = (val2 / 1023.0) * 5;
  //CdSセルの抵抗値を求める
  float resister = 10000 * volt/(5.0 - volt);
  //照度を求める
  float illuminance = 4050000 * pow(resister, -1.34);
  //照度を小数0桁までシリアルモニタに出力する
  Serial.print(illuminance,0);Serial.println(" lx");
  //500ミリ秒秒待つ
  delay(500);
}

