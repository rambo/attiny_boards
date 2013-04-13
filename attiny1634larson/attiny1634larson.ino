/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (byte led = 0; led<8; led++)
  {
      pinMode(led, OUTPUT);
      digitalWrite(led, LOW);   
  }
}

// the loop routine runs over and over again forever:
void loop()
{
  byte led;
  byte prevled;
  byte otherend;
  byte prevotherend;
  for (led = 0; led<8; led++)
  {
      if (led > 0)
      {
          prevled = led - 1;
      }
      otherend = 7-led;
      prevotherend = otherend+1;
      digitalWrite(prevled, LOW);
      digitalWrite(prevotherend, LOW);
      
      digitalWrite(led, HIGH);
      digitalWrite(otherend, HIGH);
      delay(100);
  }
  digitalWrite(led-1, LOW);
  digitalWrite(otherend, LOW);
  delay(1000);
  
}
