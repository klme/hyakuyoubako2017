//変数aに0を代入する
int a = 0;

void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  //aに1加えたものをa自身に代入する
  a = a + 1;
  //aの値をシリアルモニタに出力する
  Serial.println(a);
  //1秒待つ
  delay(1000);
}

