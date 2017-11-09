#include <LiquidCrystal.h>

//LCDモジュールの配線(rs, rw, enable, d4, d5, d6, d7) 
LiquidCrystal lcd = LiquidCrystal(12, 11, 10, 5,  4,  3,  2);

void setup() {
  //シリアル通信の初期化
  Serial.begin(9600) ;
  // 液晶の 行数、列数を設定
  lcd.begin(16, 2);
  // 液晶画面をクリア
  lcd.clear();
  //カーソルを0行0列せセット
  lcd.setCursor(0, 0);
}
void loop() {
  /*****************温度センサ***************/
  //A0番ピンからセンサーの出力電圧をA/D変換
  int val0 = analogRead(0) ;
  //温度の値を求める 
  float tmp = (float)val0*500.0/1023.0 - 60.0 ;
  /*****************湿度センサ***************/
  //A1番ピンからセンサーの出力電圧をA/D変換
  int val1 = analogRead(1);
  //湿度の値を求める
  float hum = (val1/1023.0)/0.0062-0.16;
  /*****************照度センサ***************/
  //A2番ピンからCdSにかかる電圧をA/D変換
  int val2 = analogRead(2);
  //CdSにかかる電圧を求める
  float volt = (val2 / 1023.0) * 5;
  //CdSの抵抗値を求める
  float resister = 10000 * volt/(5.0 - volt);
  //照度を求める
  float ill = 4050000 * pow(resister, -1.34);
    /*****************LCD***************/
  //液晶画面をクリア  
  lcd.clear();
  //カーソルを0行0列にセット
  lcd.setCursor(0, 0);
  //液晶画面に「TEMP」を出力
  lcd.print("TEMP ");
  //液晶画面に「 HUM」を出力
  lcd.print(" HUM");
  //液晶画面に「 ILL」を出力
  lcd.print(" ILLUMI");
  //カーソルを1行0列にセット
  lcd.setCursor(0, 1);
  //tmpの値を小数0桁まで液晶画面に出力
  lcd.print(tmp, 0);
  //「deg 」を液晶画面に出力 
  lcd.print("deg ");
  //humの値を小数0桁まで液晶画面に出力
  lcd.print(hum, 0);
  //「% 」を液晶画面に出力
  lcd.print("% ");
  //illの値を小数0桁まで液晶画面に出力
  lcd.print(ill, 0);
  //「lx」を液晶画面に出力
  lcd.print("lx");
  //500ミリ秒待つ
  delay(500);
}
