/*
 * scroll wheel
 */

int previousVal = 0;
int val = 0;
int ledPin = 11;
int scrollWheelPin = 10;

int velocity = 10;

void setup() {
  Serial.begin(9600);
  pinMode(scrollWheelPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  delay(1000);
  Serial.println("All set");
}

void loop() {
  val = digitalRead(scrollWheelPin);
  if (val != previousVal) {
    Serial.println(val);
    digitalWrite(ledPin, val);
    Mouse.scroll(-1 * velocity);
    delay(300);
    previousVal = val;
  }
}

