#include <stdio.h>
#include "pico/stdlib.h"
#include "cores.h"

#define TEMPO 300

// Funções para controle de cores

<<<<<<< HEAD
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

=======
void piscar(char tecla)
{
    switch (tecla)
    {
    case '1':
        ciano(TEMPO);
        apagado(300);
        ciano(TEMPO);
        apagado(300);
        break;
    case '2':
        branco(TEMPO);
        apagado(300);
        branco(TEMPO);
        apagado(300);
        break;
    case '3':
        rosa(TEMPO);
        apagado(300);
        rosa(TEMPO);
        apagado(300);
        break;
    case '4':
        amarelo(TEMPO);
        apagado(300);
        amarelo(TEMPO);
        apagado(300);
        break;
    case '5':
        vermelho(TEMPO);
        apagado(300);
        vermelho(TEMPO);
        apagado(300);
        break;
    case '6':
        azul(TEMPO);
        apagado(300);
        azul(TEMPO);
        apagado(300);
        break;
    case '7':
        verde(TEMPO);
        apagado(300);
        verde(TEMPO);
        apagado(300);
        break;
    }
}

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

>>>>>>> ClebsonRamos
// fim do arquivo cores.c