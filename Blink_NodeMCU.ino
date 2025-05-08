void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Inisialisasi pin LED_BUILTIN sebagai output
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}
