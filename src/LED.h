#ifndef LED_h
#define LED_h

#include <Arduino.h>

/** 
 * @class LEd
 * @brief Classe para controle náo bloqueante de m LED.
 * Permite ligar , desligar , ligar por tempo determinado , 
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */

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

    /**
     * @brief Processa a lógica de piscada do LED.
     */
    void funcaoPiscar();

    /**
     * @brief Processa o desligamento temporizado.
     */
    void funcaoDesligamento();

public:
/**
 * @brief Constroi um objeto Led.
 * @param pin Número do pino digital onde o LED está conectado.
 * */
Led(uint8_t pin);

    /**
     * @brief Liga o LED continuamente.
     */
    void ligar();

    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoligado_ms Tempo, em milissegundos, que o Led ficará ligado.
     */
    void ligar(uint32_t tempoLigado_ms);

    /**
     * @brief Desliga o LED e cancela os modos automaticos.
     */
    void desligar();

    /**
     * @brief Inicia a piscada contínua em 1 Hz.
     */
    void piscar();

    /**
     * @brief Pisca o Led em uma frequência determinada.
     * @param frequencia Frequência de psicada em hertz
     */
    void piscar(float frequencia); 

    /**
     * @brief Pisca o Led uma quantidade definida de vezes.
     * @param frequencia Frequência de piscada em hertz.
     * @param repeticoes Quantidade de piscadas completas.
     */
    void piscar(float frequencia, uint16_t repeticoes);

    /**
     * @brief Retorna o estado atual do LED.
     */
    bool getEstado();

    /**
     * @brief Retorna o pino atual do LED.
     */
    uint8_t getPino();

    /**
     * @brief Define manualmente o estado do LED.
     * @param estado True(ligado), False(desligado).
     */
    void setEstado(bool estado);
    
    /**
     * @brief Altera o estado do LED.
     */
    void alternar();
    
    /**
     * @brief Atualiza o estado do LED.
     */
    void update();
    
    /**
     * @brief Reseta o estado anterior do LED.
     */
    void reset();
};

#endif