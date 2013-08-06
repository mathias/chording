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

void loop() {
  button.update();
  
  if (button.fallingEdge()) {
    // enter insert
    Keyboard.write("i");
    digitalWrite(ledPin, HIGH);
  } else if (button.risingEdge()) {
    // leave insert
    // We have to build Ctrl-[ to leave insert since
    // the ESC key does not seem to be detected on OSX.
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('[');
    Keyboard.releaseAll();
    digitalWrite(ledPin, LOW);
  }
}

