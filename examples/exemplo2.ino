// EXEMPLO 02 - Desligando o LED

// Neste exemplo, o LED é inicializado e permanece desligado.
// Um objeto da classe Led é criado e associado ao pino 35 do Arduino.
// No método setup(), o LED é desligado utilizando o método desligar().
// No loop principal, o método update() é chamado continuamente para garantir


#include <Arduino.h>
#include <LED.h>

Led ledA(35);

void setup()
{
  ledA.desligar();
}

void loop()
{
  ledA.update();
}
