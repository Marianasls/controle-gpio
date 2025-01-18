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

#define TEMPO 200


int main()
{
    char tecla;
    int tecla_temp = 0;

    stdio_init_all();
    iniciaComponentes();
    keypad_init();

    /*
    Botão 1 - Ciano
    Botão 2 - Branco
    Botão 3 - Rosa
    Botão 4 - Amarelo
    Botão 5 - Vermelho
    Botão 6 - Azul
    Botão 7 - Verde
    Botão 8 - Buzzer A
    Botão 9 - Buzzer B
    Botão 0 - Apagar LEDs
    */

    while (true) {
       tecla = read_keypad();
       if(tecla != '\0'){
            switch(tecla){
                case '1':
                    ciano(TEMPO);
                    tecla_temp = 1;
                    break;
                case '2':
                    branco(TEMPO);
                    tecla_temp = 2;
                    break;
                case '3':
                    rosa(TEMPO);
                    tecla_temp = 3;
                    break;
                case '4':
                    amarelo(TEMPO);
                    tecla_temp = 4;
                    break;
                case '5':
                    vermelho(TEMPO);
                    tecla_temp = 5;
                    break;
                case '6':
                    azul(TEMPO);
                    tecla_temp = 6;
                    break;
                case '7':
                    verde(TEMPO);
                    tecla_temp = 7;
                    break;
                case '8':
                    buzzer_A(TEMPO);
                    break;
                case '9':
                    buzzer_B(TEMPO);
                    break;
                case '0':
                    apagado(TEMPO);
                    break;
                case '*':
                    if(tecla_temp <= 7)
                        piscar((char)tecla_temp);
                    break;
                case '#':
                    buzzer_A_OFF();
                    buzzer_B_OFF();
                    break;
            }
       }
       
    }
}
