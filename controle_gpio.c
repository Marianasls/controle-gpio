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
#define MATRIX_C4 1
#define MATRIX_C3 2
#define MATRIX_C2 3
#define MATRIX_C1 4
#define MATRIX_R4 5
#define MATRIX_R3 6
#define MATRIX_R2 7
#define MATRIX_R1 8

#define ROWS 4
#define COLS 4
const uint8_t Row_Pins[ROWS] = {8, 7, 6, 5}; 
const uint8_t Col_Pins[COLS] = {1, 2, 3, 4}; 

// Mapeamento do teclado matricial
const char KEY_MAP[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

int main()
{
    char tecla;

    stdio_init_all();
    iniciaComponentes();
    keypad_init();

    while (true) {
       tecla = read_keypad();
       if(tecla != '\0'){
            switch(tecla){
                case ''
            }
       }
       
    }
}
