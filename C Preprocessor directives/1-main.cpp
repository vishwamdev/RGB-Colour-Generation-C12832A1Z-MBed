#include "mbed.h"

Page 4 of 17 
PwmOut red_led(p23); 
PwmOut green_led(p24); 
PwmOut blue_led(p25); 
 
int main() { 
    while(1) { 
        red_led = 0; 
        green_led = 1; 
        blue_led = 1; 
        ThisThread::sleep_for(2000ms); 
        red_led = 1; 
 
        red_led = 1; 
        green_led = 0; 
        blue_led = 1; 
        ThisThread::sleep_for(2000ms); 
        green_led = 1; 
 
        red_led = 1; 
        green_led = 1; 
        blue_led = 0; 
        ThisThread::sleep_for(2000ms); 
        blue_led = 1; 
 
    } 
} 