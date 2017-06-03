/*
   Mini semaforo

*/


int led_verde = A0;    // LED connected to digital pin A0
int led_rojo = A2;    // LED connected to digital pin A2
int led_amarillo = A1;    // LED connected to digital pin A1

void setup() {
  // nada que hacer aquí
}

void loop() {


  analogWrite(led_rojo, 130); delay(550);
  analogWrite(led_rojo, 0); delay(200);

  analogWrite(led_amarillo, 130); delay(350);
  analogWrite(led_amarillo, 0); delay(200);

  analogWrite(led_verde, 150); delay(550);
  analogWrite(led_verde, 0); delay(200);

}


