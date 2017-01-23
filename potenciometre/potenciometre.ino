const int analogPin = A0;
int value;      //variable que emmagatzema la lectura analògica
int position;   //posició del potenciometre en tant per cent
 
void setup() {
}
 
void loop() {
 value = analogRead(analogPin); // realitzar la lectura analògica raw
 position = map(value, 0, 1023, 0, 100);  // convertir en percentatge
 
 //...fer modificacions diverses, amb el valor de posició mig
 
 delay(1000);
}
