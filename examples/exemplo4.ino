// EXEMPLO 04 - Piscando o LED
//
// Neste exemplo, o LED pisca automaticamente, na frequência padrão de 1Hz (Sem parametros).
// Um objeto da classe Led é criado e associado ao pino 35 do Arduino.
// No método setup(), a função piscar() é chamada para iniciar
// o comportamento de piscar do LED.
// No loop principal, o método update() é executado continuamente,


#include <Arduino.h>
#include <LED.h>

Led ledA(35);

void setup()
{
  ledA.piscar();
}

void loop()
{
  ledA.update();
}
