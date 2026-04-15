// EXEMPLO 01 - Ligando o LED continuamente

// Este programa demonstra a forma correta de manter um LED ligado de maneira constante.
// Um objeto da classe Led é criado e associado ao pino 35 do Arduino.
// No método setup(), o LED é acionado utilizando o método ligar().
// No loop principal, o método update() é chamado continuamente para garantir

#include <Arduino.h>
#include <LED.h>

Led ledA(35);

void setup()
{
  ledA.ligar();
}

void loop()
{
  ledA.update();
}
