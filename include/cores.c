#include <stdio.h>
#include "pico/stdlib.h"
#include "cores.h"




void apagado(int tempo){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 0); 
gpio_put(LED_G, 0);
if(tempo > 0){
sleep_ms(tempo);
}
}
void ciano(int tempo){
gpio_put(LED_R, 0);  
gpio_put(LED_B, 1); 
gpio_put(LED_G, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void branco(int tempo){
gpio_put(LED_R, 1);  
gpio_put(LED_B, 1); 
gpio_put(LED_G, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void rosa(int tempo){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 1);  
gpio_put(LED_G, 0);
if(tempo > 0){
sleep_ms(tempo);
}
}
void amarelo(int tempo){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 0);  
gpio_put(LED_G, 1);
if(tempo > 0){
sleep_ms(tempo);
}
}
void vermelho(int tempo){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 0);  
gpio_put(LED_G, 0);
if(tempo > 0){
sleep_ms(tempo);
}
}
void azul(int tempo){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 1); 
gpio_put(LED_G, 0);
if(tempo > 0){
sleep_ms(tempo);
}
}
void verde(int tempo){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 0); 
gpio_put(LED_G, 1); 
if(tempo > 0){
sleep_ms(tempo);
}
}