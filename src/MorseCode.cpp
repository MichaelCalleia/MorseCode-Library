/*
 * Morse Code uses dots and dashes to communicate with
 * signals that can be sent using sound or light.
 *
 * Morse.cpp
 *
 * This library contains functions for: all of the letters
 * in the alphabet, some accented letters, the numbers 0–9
 * and Procedural Signals ( prosigns ) for formatting, using Morse Code.
 *
 * You can use a Piezo Buzzer, LED or both
 *
 * You can use this Sketch to create your own Morse Code communicator.
 *
 * There are options below to use a piezo buzzer or an LED.
 *
 * v. 1.0.0
 * Created by Lily + Michael Calleia, June 5, 2017
 * CC-BY-SA 3.0
 *
 */

 #include "Arduino.h"
 #include "MorseCode.h"


  // MorseCode::MorseCode( int pin )
  MorseCode::MorseCode( int pin, int freq, int unit )
  {
    pinMode( pin, OUTPUT );   // setsup your pin
    // Let's declare some useful variables

    // The pin that the piezo buzzer and/or LED is attached to
    _pin = pin;

    // Sets the frequency if you are using a piezo
    // Uno, Mega, Leonardo and other AVR boards 31–65535, Zero 41—275000 )
    // set to 0 to use an LED with no buzzer
    _freq = freq;

    // The duration of all dots, dashes and spaces in Morse Code are based on a Unit
    _unit = unit;
  }


/*
 The functions that make this Sketch work
*/

  // Buidling blocks of Morse Code

    // A dot ( also called a dit )  is one unit
    void MorseCode::dot()
    {
      if ( _freq != 0 ) {
        // Use this code if you are using a peizo buzzer
        tone( _pin, _freq );
        delay( _unit );
        noTone( _pin );
       } else {
        // Use this code if you are using an LED
        digitalWrite( _pin, HIGH );
        delay( _unit );
        digitalWrite( _pin, LOW );
       }
    }

    // A dash ( also called a dah ) is three units
    void MorseCode::dash()
    {
       if ( _freq != 0 ) {
        // Use this code if you are using a peizo buzzer
        tone( _pin, _freq );
        delay( _unit * 3 );
        noTone( _pin );
       } else {
        // Use this code if you are using an LED
        digitalWrite( _pin, HIGH );
        delay( _unit * 3 );
        digitalWrite( _pin, LOW );
       }
    }


    // A space between dots or dashes within a letter are one unit
    void MorseCode::Dspace()
    {
     delay( _unit );
    }

    // A space between two letters is three units
    void MorseCode::Lspace()
    {
     delay( _unit * 3 );
    }

    // A space between two words is seven units
    void MorseCode::Wspace()
    {
     delay( _unit * 7 );
    }


  // Letters of the alphabet

    // A
    void MorseCode::a()
    {
      dot();
        Dspace();
      dash();
    }

    // B
    void MorseCode::b()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // C
    void MorseCode::c()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // D
    void MorseCode::d()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // E
    void MorseCode::e()
    {
      dot();
    }

    // F
    void MorseCode::f()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // G
    void MorseCode::g()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // H
    void MorseCode::h()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // I
    void MorseCode::i()
    {
      dot();
        Dspace();
      dot();
    }

    // J
    void MorseCode::j()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // K
    void MorseCode::k()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // L
    void MorseCode::l()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // M
    void MorseCode::m()
    {
      dash();
        Dspace();
      dash();
    }

    // N
    void MorseCode::n()
    {
      dash();
        Dspace();
      dot();
    }

    // O
    void MorseCode::o()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // P
    void MorseCode::p()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Q
    void MorseCode::q()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // R
    void MorseCode::r()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // S
    void MorseCode::s()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // T
    void MorseCode::t()
    {
      dash();
    }

    // U
    void MorseCode::u()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // V
    void MorseCode::v()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // W
    void MorseCode::w()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // X
    void MorseCode::x()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Y
    void MorseCode::y()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }


    // Z
    void MorseCode::z()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }


  // Accented letters

    // Ä - A with an umlaut mark or diaeresis.
    void MorseCode::aUmlaut()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Å, À - A with a ring or angstrom, À with a grave accent
    void MorseCode::aRing()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Ch - ch digraph.
    void MorseCode::chDigraph()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // É - E with an acute accent.
    void MorseCode::eAcute()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Ñ, Ń - N with a virgulilla, and N with acute accent.
    void MorseCode::nVirgulilla()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // Ö - O with an umlaut mark or diaeresis.
    void MorseCode::oUmlaut()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Ü - U with an umlaut mark or diaeresis.
    void MorseCode::uUmlaut()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // add more accented letters here.


  // Nubers 0-9

    void MorseCode::n0()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    void MorseCode::n1()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    void MorseCode::n2()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    void MorseCode::n3()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    void MorseCode::n4()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    void MorseCode::n5()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    void MorseCode::n6()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    void MorseCode::n7()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    void MorseCode::n8()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    void MorseCode::n9()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }


  // Punctuation and symbols

    // Period .
    void MorseCode::period()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Comma ,
    void MorseCode::comma()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // Question Mark ?
    void MorseCode::questionMark()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Apostrophe '
    void MorseCode::apostrophe()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Exclamation Point !
    void MorseCode::exclamation()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      d();
    }

    // Slash/Fraction Bar /
    void MorseCode::slash()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Parenthesis-Open (
    void MorseCode::parenthesisOpen()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Parenthesis-Close )
    void MorseCode::parenthesisClose()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Ampersand &
    void MorseCode::ampersand()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Colon :
    void MorseCode::colon()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Semicolon ;
    void MorseCode::semicolon()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
         Dspace();
      dot();
   }

    // Equal sign-Double Dash =
    void MorseCode::equalSign()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Plus sign +
    void MorseCode::plusSign()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Minus Sign, Hyphen -
    void MorseCode::minusSign()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
         Dspace();
      dash();
   }

    // Underscore _
    void MorseCode::underscore()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
         Dspace();
      dash();
   }

    // Quotation mark "
    void MorseCode::quotationMark()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
         Dspace();
      dot();
   }

    // Dollar sign $
    void MorseCode::dollarSign()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
         Dspace();
      dot();
        Dspace();
      dash();
   }

    // At Sign @
    void MorseCode::atSign()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }


  /*
   *
   *  Procedural signals ( also called Prosigns )
   *
   *    Morse code prosigns or procedural signals
   *    are dot/dash sequence symbols that do not
   *    represent written characters, but instead
   *    are used to manage transmission and
   *    formatting of messages.
   *    Sourse: https://en.wikipedia.org/wiki/Prosigns_for_Morse_code
   *
   */

    // AA - New Line ( space down one line )
    void MorseCode::AA()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // AR - End of message
    void MorseCode::AR()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // AS - Wait
    void MorseCode::AS()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // BT - New Paragraph ( space down two lines )
    void MorseCode::BT()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // CT - Attention
    void MorseCode::CT()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // HH - Error
    void MorseCode::HH()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // K - Invitation for any station to transmit, as in "OK, go ahead"
    // Note this is just the letter k.

    // KN - Invitation for named station to transmit
    void MorseCode::KN()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // NJ - Shift to Wabun code ( used to send Japanese text )
    void MorseCode::NJ()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // SK - End of contact
    void MorseCode::SK()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // SN - Understood
    void MorseCode::SN()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // SOS - International distress signal
    void MorseCode::SOS()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
