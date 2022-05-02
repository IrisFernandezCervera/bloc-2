void setup() {
Serial.begin(9600);   //Inicialitzem el port sèrie a 9600 bauds.
}

void loop() {
 int Llegir= analogRead(AD);  //Definim la variable "Llegir" com el valor de l'entrada analògica AD. 
 Serial.println(Llegir);     // Escriu "Llegir" i canvia de línia al monitor sèrie. 
 delay (200); 
}
