#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9); // Chân điều khiển servo gắn vào D9
}

void loop() {
  myservo.write(0);   // Quay về góc 0 độ
  delay(1000);        // Chờ 1 giây

  myservo.write(90);  // Quay đến góc 90 độ
  delay(1000);        // Chờ 1 giây

  myservo.write(0);   // Quay lại 0 độ
  delay(3000);        // Đợi 3 giây trước khi lặp lại
}
