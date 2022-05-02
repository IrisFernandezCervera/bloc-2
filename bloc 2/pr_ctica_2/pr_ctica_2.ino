const int LED=3;                 // pin de sortida anàlogica connectat al LED.
float valorPot=0;               // valor llegit del potenciòmetre.
                               // tipus de dades "float" perquè s'espera el resultat amb decimals.
int pwmLED=0;                  // valor de sortida PWM amb amb rang de 0 a 255 per il·luminació deLED.


void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);          // inicialitzem la comunicació amb el port sèrie a 9600 bauds.
  

}

void loop() {
  valorPot=analogRead(AD);              // llegeix el valor analògic del potenciometre.
  pwmLED=map(valorPot,0,1023,0255);    // converteix el rang 0-1023 del potenciòmetre al rang 0-255 pel LED.
  analogWrite(LED,pwmLED);            // il·lumina el LED amb el valor PWM de la sortida analògica.

/*Imprimeix els valors al monitor sèrie*/

  Serial.print("Resistencia=:")       //"Resisitència="
  Serial.print(valorPot*10/1023,3);   // a continuació el valor del potenciòmetre en K omega i 3 decimals.
  Serial.print("Kohms");              // "Kohms"
  Serial.print("\t Sortida PWM=");    // un espai de tabulació i "Sortida PWM="
  Serial.print(pwmLED);               // el valor PWM i canvia de línia.

  delay(20);



}
