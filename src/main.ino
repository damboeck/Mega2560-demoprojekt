#include <Arduino.h>
#include <util/delay.h>

void setup() {
    DDRB = 1<<7;
    PORTB= 0;
}

void loop() {
    _delay_ms(500);
    PORTB ^= 1<<7;
}