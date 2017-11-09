//LCDライブラリの読み込み
#include <LiquidCrystal.h>

//LCDモジュールの配線(rs, rw, enable, d4, d5, d6, d7) 
LiquidCrystal lcd = LiquidCrystal(12,11,10,5,4,3,2); 

void setup() {
  // 液晶の行数、列数を設定
  lcd.begin(16, 2);  
  //液晶の文字を消去
  lcd.clear();
  // カーソルを0行0列に移動
  lcd.setCursor(0, 0);
}

void loop() {
  // カーソルを0行0列に移動
  lcd.setCursor(0, 0);
  //LCDに表示する文字を出力
  lcd.print("Hello World!");
  //1000ミリ秒待つ
  delay(1000);
}

