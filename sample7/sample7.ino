void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  //変数「a」にA0ピンのA/D値を代入する
  int a = analogRead(0);
  //「a」の値をシリアルモニタに出力して改行
  Serial.println(a);
  //1000ミリ秒待つ
  delay(1000);
}

