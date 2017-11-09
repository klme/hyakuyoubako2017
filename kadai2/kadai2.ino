void setup() {
  //8番ピンを出力に設定
  pinMode(8, OUTPUT);
}

void loop() {
  //8番ピンにHIGH(5V)を出力する
  digitalWrite(8, HIGH);
  //500ミリ秒待つ
  delay(500);
  //8番ピンにLOW(0V)を出力する
  digitalWrite(8, LOW);
  //500ミリ秒待つ
  delay(500);
}

