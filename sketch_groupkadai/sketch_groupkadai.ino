//グループ課題

// 定数
#define SEAT_PIN A0 // 座るところ
#define BACK_PIN A1 // 背もたれ

// 変数
int valSeat; // 座るところ
int valBack; // 背もたれ
char data; // シリアル受信

/**
 * 初期処理
 */
void setup() {
  Serial.begin(115200);
}

/**
 * ループ
 */
void loop() {
  if(true) {
    data = Serial.read();
    if (true) {
      // 値取得
      valSeat = analogRead(SEAT_PIN);
      valBack = analogRead(BACK_PIN);
      // シリアル通信
      Serial.print(valSeat);
      Serial.print(",");
      Serial.println(valBack);
    }
  }
  delay(1000);
}
