#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB3 // PB3 as a LED pin

int main(void)
{

        /* setup */
        DDRB |= (1 << LED_PIN);  // set LED pin as OUTPUT
        //DDRB |= (1 << PB4);  // set LED pin as OUTPUT
        PORTB = 0b00000000; // set all pins to LOW

        /* loop */
        while (1)
        {
                PORTB ^= _BV(LED_PIN); // toggle LED pin
                //PORTB ^= _BV(PB4); // toggle LED pin
                _delay_ms(100);
        }
}