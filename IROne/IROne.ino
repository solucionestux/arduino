##
## Ejemplo que lee los códigos IR de un control remoto común e imprime el valor HEX de dicha tecla presionada
## Probado en un Arduino UNO
##

#include <IRremote.h>
IRrecv irrecv(11); // Receive on pin 11
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Continue receiving
  }
}
