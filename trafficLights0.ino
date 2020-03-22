int green = 4; 
int amber = 3; 
int red = 2;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(red, OUTPUT);
  pinMode(amber, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  digitalWrite(amber,HIGH);
  delay(1000);
  digitalWrite(amber, LOW);
  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
}
