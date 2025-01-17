#include <stdio.h>
#include "pico/stdlib.h"
#include "buzzers.h"


void BUZZER_A(int tempo){
gpio_put(BUZZER_A, 1);
if(tempo > 0){
sleep_ms(tempo);
}
void BUZZER_B(int tempo){
gpio_put(BUZZER_B, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void BUZZER_A_OFF(){ 
gpio_put(BUZZER_A, 0);
}
void BUZZER_B_OFF(){
gpio_put(BUZZER_B, 0);
}
void BUZZER_AB(int tempo){
gpio_put(BUZZER_A, 1);
gpio_put(BUZZER_B, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}