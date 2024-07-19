// Constants
const int buttonPin = 2; // Pin connected to the pushbutton
const int ledPin = 13;   // Pin connected to the LED
const int potPin = A0;   // Pin connected to the potentiometer

// Variables
int buttonState = 0; // Variable for reading the pushbutton status
int potValue = 0;    // Variable for reading the potentiometer value

void setup()
{
    // Initialize the pushbutton pin as an input
    pinMode(buttonPin, INPUT);

    // Initialize the LED pin as an output
    pinMode(ledPin, OUTPUT);

    // Initialize serial communication at 9600 bits per second
    Serial.begin(9600);
}

void loop()
{
    // Read the state of the pushbutton
    buttonState = digitalRead(buttonPin);

    // Check if the pushbutton is pressed
    if (buttonState == HIGH)
    {
        // Turn the LED on
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        // Turn the LED off
        digitalWrite(ledPin, LOW);
    }

    // Read the value from the potentiometer
    potValue = analogRead(potPin);

    // Print the potentiometer value to the Serial Monitor
    Serial.print("Potentiometer value: ");
    Serial.println(potValue);

    // Wait for a short period to avoid spamming the Serial Monitor
    delay(100);
}
