const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int buttonPin = 7;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:

  //assigning the pins to either input or output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //storing the value of the buttonpin in a variabe
  buttonState = digitalRead(buttonPin);

  //countdown starts only when the button is pressed
  if (buttonState == HIGH)
  {
    //all LEDS are on before the countdown begins
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led3, LOW);
    delay(1000);
    digitalWrite(led4, LOW);
  }

}
