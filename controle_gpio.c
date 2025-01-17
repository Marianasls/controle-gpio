#include <stdio.h>
#include "pico/stdlib.h"
#include "iniciarPinos.c"


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
#define MATRIX_R1 8


int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
