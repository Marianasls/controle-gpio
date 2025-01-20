#include <stdio.h>
#include "pico/stdlib.h"

// definição dos pinos
#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21

#define TEMPO 200

//inicia os componentes
void iniciaComponentes(){
    //iniciando LEDs
    gpio_init(LED_B);
    gpio_set_dir(LED_B, GPIO_OUT);
    gpio_init(LED_R);
    gpio_set_dir(LED_R, GPIO_OUT);
    gpio_init(LED_G);
    gpio_set_dir(LED_G, GPIO_OUT);
    //inciando buzzers
    gpio_init(BUZZER_A);
    gpio_set_dir(BUZZER_A, GPIO_OUT);
    gpio_init(BUZZER_B);
    gpio_set_dir(BUZZER_B, GPIO_OUT);

}

// KeyPad
#define ROWS 4
#define COLS 4
const uint8_t Row_Pins[ROWS] = {8, 7, 6, 5}; 
const uint8_t Col_Pins[COLS] = {4, 3, 2, 27}; 

// Mapeamento do teclado matricial
const char KEY_MAP[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};
void keypad_init() {
    for (int i = 0; i < ROWS; i++) {
        gpio_init(Row_Pins[i]);
        gpio_set_dir(Row_Pins[i], GPIO_OUT);
        gpio_put(Row_Pins[i], 0);
    }
    for (int i = 0; i < COLS; i++) {
        gpio_init(Col_Pins[i]);
        gpio_set_dir(Col_Pins[i], GPIO_IN);
        gpio_pull_down(Col_Pins[i]);
    }
}
char read_keypad() {
    for (int row = 0; row < ROWS; row++) {
        gpio_put(Row_Pins[row], 1);

        for (int col = 0; col < COLS; col++) {
            if (gpio_get(Col_Pins[col])) {
                gpio_put(Row_Pins[row], 0);
                sleep_ms(20);
                return KEY_MAP[row][col];
            }
        }
        gpio_put(Row_Pins[row], 0);
    }
    return '\0';
}

// Buzzers

// Funções para controle dos buzzers
void buzzer_A(int tempo){
    gpio_put(BUZZER_A, 1);
    if(tempo > 0){// Se o tempo for maior que 0, o buzzer ficará ligado por esse tempo
        sleep_ms(tempo);
    }
}
// Função para acionar o buzzer B
void buzzer_B(int tempo){
    gpio_put(BUZZER_B, 1);
    if(tempo > 0){ // Se o tempo for maior que 0, o buzzer ficará ligado por esse tempo
        sleep_ms(tempo);
    }
}
// Função para desligar o buzzer A
void buzzer_A_OFF(){ // Desliga o buzzer A
    gpio_put(BUZZER_A, 0);
}
// Função para desligar o buzzer B
void buzzer_B_OFF(){  // Desliga o buzzer B
    gpio_put(BUZZER_B, 0);
}
// Função para acionar os buzzers A e B
void buzzer_AB(int tempo){//
    gpio_put(BUZZER_A, 1);
    gpio_put(BUZZER_B, 1);
    if(tempo > 0){// Se o tempo for maior que 0, os buzzers ficarão ligados por esse tempo
        sleep_ms(tempo);
    }
}

// Cores

#define _TEMPO_ 300

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
        ciano(_TEMPO_);
        apagado(_TEMPO_);
        ciano(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '2':
        branco(_TEMPO_);
        apagado(_TEMPO_);
        branco(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '3':
        rosa(_TEMPO_);
        apagado(_TEMPO_);
        rosa(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '4':
        amarelo(_TEMPO_);
        apagado(_TEMPO_);
        amarelo(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '5':
        vermelho(_TEMPO_);
        apagado(_TEMPO_);
        vermelho(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '6':
        azul(_TEMPO_);
        apagado(_TEMPO_);
        azul(_TEMPO_);
        apagado(_TEMPO_);
        break;
    case '7':
        verde(_TEMPO_);
        apagado(_TEMPO_);
        verde(_TEMPO_);
        apagado(_TEMPO_);
        break;
    }
}

// main
int main()
{
    char tecla;
    int tecla_temp = 0;
    iniciaComponentes();
    keypad_init();

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
