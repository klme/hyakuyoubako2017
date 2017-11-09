void setup() {
  //パソコンとシリアル通信の準備をする
  Serial.begin(9600);
}
void loop() {
  //A2ピンに入力された電圧をA/D変換して変数valへ代入する
  int val = analogRead(2);
  //A/D値から入力電圧を求める
  float volt = (val / 1023.0) * 5;
  //入力電圧からCdSの抵抗値を求める
  float resister = 10000 * volt/(5.0 - volt);
  //CdSの抵抗値から照度を求める
  float illuminance = 4050000 * pow(resister, -1.34);
  //照度を小数1桁までシリアルモニタに出力する
  Serial.print(illuminance, 1);
  //「lx」をシリアルモニタに出力して改行する
  Serial.println(" lx");
  //500ミリ秒待つ
  delay(500);
}


