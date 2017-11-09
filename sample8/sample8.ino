void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  //A0ピンの電圧をA/D変換した値(A/D値)を変数aに代入する
  int val = analogRead(0);
  //A/D値から電圧を求める
  float volt = val*5/1023.0;
  //求めた電圧値をシリアルモニタに出力する
  Serial.println(volt);
  //1秒待つ
  delay(1000);
}

