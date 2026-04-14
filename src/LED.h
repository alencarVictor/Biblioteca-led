#ifndef LED_h
#define LED_h

#include <Arduino.h>


class Led {

    private: //Atributos
    uint8_t pino;
    bool estado;
    bool desligarPorTempo = false;
    uint32_t desligarNoMomento; 

    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;

    void funcaoPiscar();
    void funcaoDesligamento();

public:
    Led(uint8_t pin); //Metodo construtor, Memo nome da classe

    void ligar(); //Metodo c/ valor fixo
    void ligar(uint32_t tempoLigado_ms);//Metodo c/ valor variavel

    void desligar();

    void piscar();// Metodo c/ valor frequencia fixo
    void piscar(float frequencia); //Metodo c/ valor frequencia variavel
    void piscar(float frequencia, uint16_t repeticoes);// Metodo c/ valor frequencia e repeticoes variavies

    bool getEstado(); //getters
    uint8_t getPino();

    void setEstado(bool estado); //setters

    void alternar();

    void update();

    void reset();
};

#endif