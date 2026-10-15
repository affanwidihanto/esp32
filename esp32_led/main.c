// DEKLRASI PIN YG DISAMBUNGKAN LED
int LED_Merah = 16;
int LED_Kuning = 17;
int LED_Hijau = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  // DEKLRASI VARIABEL PIN SEBAGAI OUTPUT YG SAMBUNGKAN LED
  pinMode(LED_Merah, OUTPUT);
  pinMode(LED_Kuning, OUTPUT);
  pinMode(LED_Hijau, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_Merah, HIGH);
  digitalWrite(LED_Kuning, LOW);
  digitalWrite(LED_Hijau, LOW);
  delay(1000);
  digitalWrite(LED_Merah, LOW);
  digitalWrite(LED_Kuning, HIGH);
  digitalWrite(LED_Hijau, LOW);
  delay(1000);
  digitalWrite(LED_Merah, LOW);
  digitalWrite(LED_Kuning, LOW);
  digitalWrite(LED_Hijau, HIGH);
  delay(1000);
}
