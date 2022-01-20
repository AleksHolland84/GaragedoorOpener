/*
 * Project Garage_Opener
 * Description:
 * Author:
 * Date:
 */

const int button = D4;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(button, INPUT_PULLUP);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  if (digitalRead(button) == LOW) {
    Particle.publish("garage/port");
    }

}
