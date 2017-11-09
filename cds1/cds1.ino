void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}
void loop() {
  //A2ピンに入力された電圧をA/D変換して変数valへ代入する
  int val = analogRead(2);
  //A/D値から入力電圧を求める
  float volt = (val / 1023.0) * 5;
  //求めた電圧をシリアルモニタに出力する
  Serial.println(volt);
  //500ミリ秒待つ
  delay(500);
}

