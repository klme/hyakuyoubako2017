void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop(){
  //文字列「Hello」をシリアルモニタに出力して改行
  Serial.print("Hello\n");
  //文字列「World!」をシリアルモニタに出力して改行
  Serial.println("World!"); 
  //1000ミリ秒待つ   
  delay(1000);
}

