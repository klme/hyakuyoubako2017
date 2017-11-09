//int型の変数「led」を宣言して「13」を代入
int led = 13;

void setup() {
  //(led)番ピンを出力に設定
  pinMode(led, OUTPUT);
}

void loop() {
  //(led)番ピンにHIGH(5V)を出力
  digitalWrite(led, HIGH);
  //1000ミリ秒待つ   
  delay(1000); 
  //(led)番ピンにLOW(0V)を出力
  digitalWrite(led, LOW);
  //1000ミリ秒待つ   
  delay(1000); 
}
