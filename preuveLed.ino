
int PINLED = 5;
int DELAY_BRIGHTNESS = 500;

void setup() {
  // initialize digital pin 5 as an output.
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  for(int i=0; i<=255;){
    analogWrite(PINLED, i);
    i+=5;
    DELAY_BRIGHTNESS+=50;
    delay(DELAY_BRIGHTNESS);
    Serial.print("Brigtness = ");
    Serial.println(i);
    }

}
