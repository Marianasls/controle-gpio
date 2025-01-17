#include <stdio.h>
#include "pico/stdlib.h"
#include "iniciarPinos.h"

// definição dos pinos
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

// inicia os componentes
void iniciarPinos()
{
  // iniciando LEDs
  gpio_init(LED_B);
  gpio_set_dir(LED_B, GPIO_OUT);
  gpio_init(LED_R);
  gpio_set_dir(LED_R, GPIO_OUT);
  gpio_init(LED_G);
  gpio_set_dir(LED_G, GPIO_OUT);
  // inciando buzzers
  gpio_init(BUZZER_A);
  gpio_set_dir(BUZZER_A, GPIO_OUT);
  gpio_init(BUZZER_B);
  gpio_set_dir(BUZZER_B, GPIO_OUT);
}

// fim do arquivo
