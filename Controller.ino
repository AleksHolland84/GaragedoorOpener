/*
 * Project Garage_Controller
 * Description:
 * Author:
 * Date:
 */

// Setting pins

#define relay D3
#define MyEvent = "<event/name>"

bool toggle = false;



// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(led, OUTPUT);
  digitalWrite(led, false);
  Serial.begin(9600);
  Particle.subscribe(MyEvent, myHandler);

  Particle.function("GARAGE", myPORT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}

void myHandler(const char *event, const char *data)
{
  Particle.publish("event-fired", String(data));
  // subscribe handler function 
    digitalWrite(relay, true);
    delay(200);
    digitalWrite(relay, false);
}



// Particle function 
int myPORT(String command)
{
  // toggle relay on and off
    digitalWrite(relay, true);
    delay(200);
    digitalWrite(relay, false);
    return 1;
}
