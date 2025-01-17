#include <stdio.h>
#include "pico/stdlib.h"
#include "buzzers.h"


void buzzer_A(int tempo){
gpio_put(BUZZER_A, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void buzzer_B(int tempo){
gpio_put(BUZZER_B, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void buzzer_A_OFF(){ 
gpio_put(BUZZER_A, 0);
}
void buzzer_B_OFF(){
gpio_put(BUZZER_B, 0);
}
void buzzer_AB(int tempo){
gpio_put(BUZZER_A, 1);
gpio_put(BUZZER_B, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}