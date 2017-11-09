/*
2016年11月5日
リフレッシュ理科教室「デジタル百葉箱を作ろう！」
Arduino本体に内蔵されたLED点滅させるスケッチ
*/

void setup() {
  //デジタル13番ピンを出力に設定する
  pinMode(13, OUTPUT);
}

void loop() {
  //デジタル13番ピンに5Vを出力する
  digitalWrite(13, HIGH);
  //1000ミリ秒待つ
  delay(1000);
  //デジタル13番ピンに0Vを出力する
  digitalWrite(13, LOW);
  //1000ミリ秒待つ
  delay(1000);
}
