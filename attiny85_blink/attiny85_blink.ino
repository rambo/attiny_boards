/**
 * Pin notes by Suovula (see also http://hlt.media.mit.edu/?p=1229)
 *
// I2C
arduino pin 0 = not(OC1A) = PORTB <- _BV(0) = SOIC pin 5 (I2C SDA, PWM)
arduino pin 2 =           = PORTB <- _BV(2) = SOIC pin 7 (I2C SCL, Analog 1)
// Timer1 -> PWM
arduino pin 1 =     OC1A  = PORTB <- _BV(1) = SOIC pin 6 (PWM)
arduino pin 3 = not(OC1B) = PORTB <- _BV(3) = SOIC pin 2 (Analog 3, XTAL)
arduino pin 4 =     OC1B  = PORTB <- _BV(4) = SOIC pin 3 (Analog 2, XTAL)
 */

#define BLINKPIN 3 // Note: if you have xtal you can't use this as output

void setup()
{
    // TODO: Tri-state this and wait for input voltage to stabilize 
    pinMode(BLINKPIN, OUTPUT); // OC1B-, Arduino pin 3, ADC
    digitalWrite(BLINKPIN, LOW); // Note that this makes the led turn on, it's wire this way to allow for the voltage sensing above.
    
    // Whatever other setup routines ?
    
    digitalWrite(BLINKPIN, HIGH);
}

void loop()
{
    digitalWrite(BLINKPIN, LOW); // Note that this makes the led turn on, it's wire this way to allow for the voltage sensing above.
    delay(500);
    digitalWrite(BLINKPIN, HIGH);
    delay(500);
}
