#define LED_PIN 9  // GPIO điều khiển LED

void setup() {
  Serial.begin(9600);    // UART0 mặc định để debug
  Serial1.begin(9600, SERIAL_8N1, 44, 43); // RX = GPIO44, TX = GPIO43
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (Serial1.available()) {
    char c = Serial1.read();
    Serial.print("Received: ");
    Serial.println(c);

    if (c == '1') digitalWrite(LED_PIN, HIGH);
    if (c == '0') digitalWrite(LED_PIN, LOW);
  }

  delay(10);
}
