/*
 * A vim insert mode foot pedal
 */

#include <Bounce.h>

int ledPin = 11;
int footPedalPin = 9;

// 10 = debounce time in ms
Bounce button = Bounce(footPedalPin, 10);

void setup() {
  Serial.begin(9600);
  pinMode(footPedalPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Keyboard.begin();

  delay(1000);
  Serial.println("All set");
}

void leaveInsert() {
  // We have to build Ctrl-[ to leave insert since
  // the ESC key does not seem to be detected on OSX.
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('[');
  Keyboard.releaseAll();
};

void loop() {
  button.update();


  if (button.fallingEdge()) {
    // ensure we're not in insert mode
    leaveInsert();
    // enter insert
    Keyboard.write("i");
    digitalWrite(ledPin, HIGH);
  } else if (button.risingEdge()) {
    leaveInsert();
    digitalWrite(ledPin, LOW);
  }
}

