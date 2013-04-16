/*
  Blink Morse
  This blinks "hello world" in Morse code
 
  Originally "Examples>>Basics>>Blink"
  
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // word end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // letter end
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // dash
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(350);               // short pause
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // dot
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // end transmission
}
