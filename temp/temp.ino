void setup() {
  //シリアル通信の初期化
  Serial.begin(9600) ;
}
void loop() {
  //A0ピンでセンサーの出力電圧読込み
  int val0 = analogRead(0);
  //電圧から温度に変換
  float tmp = 100 * (val0*5.0/1023.0) - 60.0 ;
  //算出した温度を小数1桁までシリアルモニタに出力
  Serial.print(tmp, 1);
  //「deg」をシリアルモニタに出力して改行
  Serial.println(" deg"); 
  //500ミリ秒待つ  
  delay(500);
}

