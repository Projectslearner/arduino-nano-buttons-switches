/*
    Project name : Buttons Switches
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-buttons-switches
*/

const int buttonPin = 2;  // Pin connected to the button or switch
int buttonState = 0;      // Variable to store the state of the button

void setup()
 {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);  // Set the button pin as input
}

void loop()
{
  buttonState = digitalRead(buttonPin);  // Read the state of the button

  // Check if the button is pressed
  if (buttonState == HIGH)
  {
    Serial.println("Button pressed");
  } 
  else 
  {
    Serial.println("Button released");
  }

  delay(100);  // Delay to debounce the button
}
