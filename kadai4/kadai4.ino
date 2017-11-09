void setup() {
  pinMode(13, OUTPUT);//13番ピンを出力に設定
  pinMode(12, OUTPUT);//12番ピンを出力に設定
  pinMode(11, OUTPUT);//11番ピンを出力に設定
}

void loop() {
  digitalWrite(13, HIGH);//13番ピンにHIGH(5V)を出力
  digitalWrite(12, LOW);//12番ピンにLOW(0V)を出力
  digitalWrite(11, LOW);//11番ピンにLOW(0V)を出力
  delay(1000);           //１秒待つ
  digitalWrite(13, LOW);//13番ピンにLOW(0V)を出力
  digitalWrite(12, HIGH);//12番ピンにHIGH(5V)を出力
  digitalWrite(11, LOW);//11番ピンにLOW(0V)を出力
  delay(1000);          //１秒待つ
  digitalWrite(13, LOW);//13番ピンにLOW(0V)を出力
  digitalWrite(12, LOW);//12番ピンにLOW(0V)を出力
  digitalWrite(11, HIGH);//11番ピンにHIGH(5V)を出力
  delay(1000);          //１秒待つ
}

