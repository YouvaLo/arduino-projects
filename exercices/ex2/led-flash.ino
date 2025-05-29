#define PIN_13 13

//Run one time, in the beginning  
void setup()
{
    //or int pin13 = 13;
    pinMode(PIN_13, OUTPUT);
    
    //Data transmission speed, in bauds (bits/s)
    Serial.begin(9600); 
}

void loop()
{
    digitalWrite(PIN_13, HIGH);
    delay(500);
    digitalWrite(PIN_13, LOW);
    delay(500);
}