void setup() {
  //シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  //三角形の高さを設定
  float takasa = 10;
  //三角形の底辺を設定
  float teihen = 8;
  //面積の値を入れる変数を宣言
  float menseki;
  
  //面積の計算
  menseki = takasa * teihen/2.0;
  //面積をシリアルモニタに出力して改行
  Serial.println(menseki);
  //1000ミリ秒待つ
  delay(1000);    
}
