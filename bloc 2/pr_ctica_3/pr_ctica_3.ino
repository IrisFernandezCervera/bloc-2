// detector de llum amb LDR 

#define pinLED 12


void setup() {

  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);

}

void loop() {

 int v= analogRead(A0);
 // el valor 600 (següent linia) s'ha d'ajustar depenn de la llum del taller.
 // i del valor de la resistencia pill-down
 // poca llum -> v petit, molta llum -> v gran
 if (v < 600) digitalWrite (pinLED, HIGH);
 else digitalWrite (pinLED, LOW);
 Serial.println(v);

}
