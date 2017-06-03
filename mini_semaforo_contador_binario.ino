/*
   Mini semaforo --> versión contador binario

*/


int led_verde = A0;
int led_rojo = A2;
int led_amarillo = A1;

void setup() {
  Serial.begin(115200);
}

void led_rojo_ON() {
  analogWrite(led_rojo, 130);
}

void led_rojo_OFF() {
  analogWrite(led_rojo, 0);
}


void led_amarillo_ON() {
  analogWrite(led_amarillo, 130);
}

void led_amarillo_OFF() {
  analogWrite(led_amarillo, 0);
}


void led_verde_ON() {
  analogWrite(led_verde, 130);
}

void led_verde_OFF() {
  analogWrite(led_verde, 0);
}


void loop() {
  //---- posición de los leds contadores
  // 0        0        0
  // LED V    LED A    LED R

  for (byte contador = 0; contador <= 7; contador++) {
    if (bitRead(contador, 0)) {
      led_rojo_ON();
    }
    else
    {
      led_rojo_OFF();
    }
    if (bitRead(contador, 1)) {
      led_amarillo_ON();
    }
    else
    {
      led_amarillo_OFF();
    }
    if (bitRead(contador, 2)) {
      led_verde_ON();
    }
    else
    {
      led_verde_OFF();
    }
    delay(500);

  }
  delay(1000);
}


