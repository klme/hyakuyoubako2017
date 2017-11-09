void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}
void loop() {
  //A2ピンのA/D変換値を変数「val」へ代入
  int val = analogRead(2);
  //A/D値から入力電圧を求める
  float volt = (val / 1023.0) * 5;
  //入力電圧からCdSの抵抗値を求める
  float resister = 10000 * volt/(5.0 - volt);
  //求めた抵抗値をシリアルモニタに出力して改行
  Serial.println(resister);
  //500ミリ秒待つ
  delay(500);
}

