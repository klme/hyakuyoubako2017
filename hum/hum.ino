void setup() {
  //シリアル通信の初期化
  Serial.begin(9600) ;
}
void loop() {
  //A1ピンでセンサーの出力電圧を読込み
  int val1 = analogRead(1);
  //センサーの出力電圧から湿度を算出
  float hum = ((val1*5.0/1023.0)-0.8)/0.031;
  //湿度を小数1桁までシリアルモニタに出力
  Serial.print(hum,1);
  //「%」をシリアルモニタに出力
  Serial.println(" %");
  //500ミリ秒待つ
  delay(500);
}

