/*
 *
 * Hello World! using  MorseCode Library
 *
 * Created by Lily + Michael Calleia, June 5, 2017
 *
 * CC-BY-SA 3.0
 *
 */

#include <MorseCode.h>


MorseCode morse( 13, 0, 250 );
// Arguments
// Pin: pin that the buzzer (and optional LED) will be on
// Frequency: sets the frequency of the buzzer (Uno, Mega, Leonardo and other AVR boards 31–65535, Zero 41—275000)
// Unit: sets the length of a dot in milliseconds

void setup()
{
}


// The loop, which will run until power is removed or reset is press
void loop() {

  // HELLO
  morse.h();
    morse.Lspace();
  morse.e();
   morse.Lspace();
  morse.l();
    morse.Lspace();
  morse.l();
    morse.Lspace();
  morse.o();
    morse.Wspace();
  // WORLD!
  morse.w();
    morse.Lspace();
  morse.o();
    morse.Lspace();
  morse.r();
    morse.Lspace();
  morse.l();
    morse.Lspace();
  morse.d();
    morse.Lspace();
  morse.exclamation();
   morse.Wspace();
  morse.AR();  // Prosign for End of Message.
    morse.Wspace();
    morse.Wspace();
    morse.Wspace();

}
