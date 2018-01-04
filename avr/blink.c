#include <avr/io.h>
#include <avr/delay.h> // has some delay functions you can use
 
int main(void) {
  DDRC=0xff; // all C ports as output
  while(1) {
    //TODO:: Please write your application code 

    PORTC=0xff; // turn on all C ports
    _delay_ms(200); // wait 200 milliseconds
    PORTC=0x00; // turn off all c ports
    _delay_ms(200); // wait 200 milliseconds
  }
}
