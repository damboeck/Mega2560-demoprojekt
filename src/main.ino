#include <Arduino.h>
#include <util/delay.h>

void setup() {
    DDRB = 1<<7;
    PORTB= 0;
}

void loop() {
    PORTB ^= 1<<7;
}