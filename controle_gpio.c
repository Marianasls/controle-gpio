#include <stdio.h>
#include "pico/stdlib.h"
#include "include/iniciarPinos.c"
#include "include/cores.c"
#include "include/buzzers.c"
#include "include/KeyPad.c"

// definição dos pinos
#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define MATRIX_C4 4
#define MATRIX_C3 3
#define MATRIX_C2 2
#define MATRIX_C1 27
#define MATRIX_R4 8
#define MATRIX_R3 7
#define MATRIX_R2 6
#define MATRIX_R1 5


int main()
{
    stdio_init_all();
    iniciaComponentes();
    while (true) {
       
       
    }
}
