#include <stdio.h>
#include "pico/stdlib.h"
#include "cores.h"

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define MATRIX_C4 1
#define MATRIX_C3 2
#define MATRIX_C2 3
#define MATRIX_C1 4
#define MATRIX_R4 5
#define MATRIX_R3 6
#define MATRIX_R2 7


#define TIME 300

// Funções para controle de cores


// Função para apagar todos os leds
void apagado(int tempo)
{
  gpio_put(LED_R, 0);
  gpio_put(LED_B, 0);
  gpio_put(LED_G, 0);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led B e G
void ciano(int tempo)
{
  gpio_put(LED_R, 0);
  gpio_put(LED_B, 1);
  gpio_put(LED_G, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led R, G e B
void branco(int tempo)
{
  gpio_put(LED_R, 1);
  gpio_put(LED_B, 1);
  gpio_put(LED_G, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led R e B
void rosa(int tempo)
{
  gpio_put(LED_R, 1);
  gpio_put(LED_B, 1);
  gpio_put(LED_G, 0);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led R e G
void amarelo(int tempo)
{
  gpio_put(LED_R, 1);
  gpio_put(LED_B, 0);
  gpio_put(LED_G, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led R
void vermelho(int tempo)
{
  gpio_put(LED_R, 1);
  gpio_put(LED_B, 0);
  gpio_put(LED_G, 0);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led B
void azul(int tempo)
{
  gpio_put(LED_R, 0);
  gpio_put(LED_B, 1);
  gpio_put(LED_G, 0);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}
// Função para acender o led G
void verde(int tempo)
{
  gpio_put(LED_R, 0);
  gpio_put(LED_B, 0);
  gpio_put(LED_G, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o programa espera o tempo definido
    sleep_ms(tempo);
  }
}


void piscar(char tecla)
{
    switch (tecla)
    {
    case '1':
        ciano(TIME);
        apagado(300);
        ciano(TIME);
        apagado(300);
        break;
    case '2':
        branco(TIME);
        apagado(300);
        branco(TIME);
        apagado(300);
        break;
    case '3':
        rosa(TIME);
        apagado(300);
        rosa(TIME);
        apagado(300);
        break;
    case '4':
        amarelo(TIME);
        apagado(300);
        amarelo(TIME);
        apagado(300);
        break;
    case '5':
        vermelho(TIME);
        apagado(300);
        vermelho(TIME);
        apagado(300);
        break;
    case '6':
        azul(TIME);
        apagado(300);
        azul(TIME);
        apagado(300);
        break;
    case '7':
        verde(TIME);
        apagado(300);
        verde(TIME);
        apagado(300);
        break;
    }
}
// fim do arquivo cores.c