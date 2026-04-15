// EXEMPLO 06 - Piscando o LED com frequência e repetiçoes determinados
//
// Neste exemplo, o LED pisca automaticamente, na frequência determinda (Parametro: 2),
// e com determinado numero de repetiçoes(Parametro: 10)
// Ou seja Ex: led(2,10)
// Um objeto da classe Led é criado e associado ao pino 35 do Arduino.
// No método setup(), a função piscar() é chamada para iniciar
// o comportamento de piscar do LED durante determinado numero de repetiçoes.
// Após finalizado o numero de repetiçoes, o LED retorna ao estado desligado.
// No loop principal, o método update() é executado continuamente,


#include <Arduino.h>
#include <LED.h>

Led ledA(35);

void setup()
{
  ledA.piscar(2,10);
}

void loop()
{
  ledA.update();
}
