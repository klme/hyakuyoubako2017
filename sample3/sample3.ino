void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  //文字列「Hello World !」をシリアルモニタに送信
  Serial.print("Hello World !"); 
  //1000ミリ秒待つ 
  delay(1000);   
}

