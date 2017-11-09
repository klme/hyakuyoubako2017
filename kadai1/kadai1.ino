void setup() {
  //8番ピンを出力に設定
  pinMode(8, OUTPUT);
}

void loop() {
  //8番ピンにHIGH(5V)を出力する
  digitalWrite(8, HIGH);
  //1000ミリ秒待つ
  delay(1000);
  //8番ピンにLOW(0V)を出力する
  digitalWrite(8, LOW);
  //1000ミリ秒待つ
  delay(1000);
}

