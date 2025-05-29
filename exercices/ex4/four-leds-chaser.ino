#define PIN_13 13
#define PIN_12 12
#define PIN_11 11
#define PIN_10 10
  
void setup()
{
    pinMode(PIN_13, OUTPUT);
  	pinMode(PIN_12, OUTPUT);
  	pinMode(PIN_11, OUTPUT);
  	pinMode(PIN_10, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(PIN_13, HIGH);
  	digitalWrite(PIN_12, LOW);
  	digitalWrite(PIN_11, LOW);
  	digitalWrite(PIN_10, LOW);
    delay(100); 
	digitalWrite(PIN_13, LOW);
    digitalWrite(PIN_12, HIGH);
  	delay(100);
  	digitalWrite(PIN_12, LOW);
    digitalWrite(PIN_11, HIGH);
  	delay(100);
  	digitalWrite(PIN_11, LOW);
    digitalWrite(PIN_10, HIGH);
  	delay(100);
}