// EXEMPLO 03 - Alternando o estado do LED
//
// Neste exemplo, o estado do LED é alternado através de um botao , ou seja,
// se estiver ligado ele será desligado, e se estiver desligado ele será ligado.
// Um objeto da classe Led é criado e associado ao pino 35 do Arduino.
// No método setup(), a função alternar() é chamada para inverter
// o estado atual do LED logo na inicialização do programa.
// No loop principal, o método update() é executado continuamente,

#include <Arduino.h>
#include <LED.h>

Led ledA(35);
const uint8_t pinBotao = 0;

void setup()
{
  pinMode(pinBotao, INPUT_PULLUP);
  ledA.ligar();
}

void loop()
{
  ledA.update();
  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao = HIGH;

  if (estadoAnteriorBotao && !estadoAtualBotao)
  {
    ledA.alternar();
  }
  estadoAnteriorBotao = estadoAtualBotao;
}
