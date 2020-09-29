void setup() {
 pinMode(LED_BUILTIN, OUTPUT);    //rojo derecho
 pinMode(12, OUTPUT);    //amarillo
 pinMode(11, OUTPUT);    //verde

 pinMode(10, OUTPUT);   //rojo izquierdo
 pinMode(9, OUTPUT);    //amarillo
 pinMode(8, OUTPUT);    //verde
  
}

void loop() {
  digitalWrite(13, HIGH);  //prende rojo
  digitalWrite(8, HIGH);    //prende verde
  delay(5000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);

}
