//Potenciomatreled//

const int led =3;  // led connectat al pin 3
const int pot =0; // el pot està connctat al pin A0

int brillo;  //variable per la brillantor

void setup ()  {
  pinMode (led, OUTPUT);  // assignem al led com sortida
  /* els pins analògics es declaran com entrada automaticament */
}

void loop (){
  /*llegim el valor del potenciometre dividint entre 4,
  ja que només es poden utilitzar valors entre 0 i 255 en analog Write  */
  brillo = analogRead (pot) / 4; 
  /*analogWrite rep dos valors,el pin a utilitzar i la intensitat del voltatge
   els valors de voltage van de 0 a 255*/
  analogWrite(led, brillo);
}
