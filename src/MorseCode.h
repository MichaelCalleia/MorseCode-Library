/*
 * Morse Code uses dots and dashes to communicate with
 * signals that can be sent using sound or light.
 *
 * Morse.h
 *
 * This library contains functions for: all of the letters
 * in the alphabet, some accented letters, the numbers 0–9
 * and Procedural Signals (prosigns); for formatting, using Morse Code.
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

 #ifndef MorseCode_h
 #define MorseCode_h

 #include "Arduino.h"


class MorseCode
{
  public:
    MorseCode(int pin, int freq, int unit);

    /* Morse Code functions */

    // Dot and Dash
    void dot();        // A dot (also called a dit);  is one unit
    void dash();       // A dash (also called a dah); is three units

    // Spaces
    void Dspace();     // A space between dots or dashes within a letter are one unit
    void Lspace();     // A space between two letters is three units
    void Wspace();     // A space between two words is seven units

    // Letters of the alphabet A–Z
    void a();                  // A
    void b();                  // B
    void c();                  // C
    void d();                  // D
    void e();                  // E
    void f();                  // F
    void g();                  // G
    void h();                  // H
    void i();                  // I
    void j();                  // J
    void k();                  // K
    void l();                  // L
    void m();                  // M
    void n();                  // N
    void o();                  // O
    void p();                  // P
    void q();                  // Q
    void r();                  // R
    void s();                  // S
    void t();                  // T
    void u();                  // U
    void v();                  // V
    void w();                  // W
    void x();                  // X
    void y();                  // Y
    void z();                  // Z

    // Accented letters
    void aUmlaut();            // Ä - A with an umlaut mark or diaeresis.
    void aRing();              // Å, À - A with a ring or angstrom, À with a grave accent
    void chDigraph();          // Ch - ch digraph.
    void eAcute();             // É - E with an acute accent.
    void nVirgulilla();        // Ñ, Ń - N with a virgulilla, and N with acute accent.
    void oUmlaut();            // Ö - O with an umlaut mark or diaeresis.
    void uUmlaut();            // Ü - U with an umlaut mark or diaeresis.
    // add more accented letters here.

    // Nubers 0-9
    void n0();                 // 0
    void n1();                 // 1
    void n2();                 // 2
    void n3();                 // 3
    void n4();                 // 4
    void n5();                 // 5
    void n6();                 // 6
    void n7();                 // 7
    void n8();                 // 8
    void n9();                 // 9

    // Punctuation and symbols
    void period();             // Period .
    void comma();              // Comma ,
    void questionMark();       // Question Mark ?
    void apostrophe();         // Apostrophe '
    void exclamation();        // Exclamation Point !
    void slash();              // Slash/Fraction Bar /
    void parenthesisOpen();    // Parenthesis-Open (
    void parenthesisClose();   // Parenthesis-Close );
    void ampersand();          // Ampersand &
    void colon();              // Colon :
    void semicolon();          // Semicolon ;
    void equalSign();          // Equal sign-Double Dash =
    void plusSign();           // Plus sign +
    void minusSign();          // Minus Sign, Hyphen -
    void underscore();         // Underscore _
    void quotationMark();      // Quotation mark "
    void dollarSign();         // Dollar sign $
    void atSign();             // At Sign @

    // Procedural signals (also called Prosigns);
    void AA();                 // AA - New Line (space down one line);
    void AR();                 // AR - End of message
    void AS();                 // AS - Wait
    void BT();                 // BT - New Paragraph (space down two lines);
    void CT();                 // CT - Attention
    void HH();                 // HH - Error
                              // K - Invitation for any station to transmit, as in "OK, go ahead" Note this is just the letter k.
    void KN();                 // KN - Invitation for named station to transmit
    void NJ();                 // NJ - Shift to Wabun code (used to send Japanese text);
    void SK();                 // SK - End of contact
    void SN();                 // SN - Understood
    void SOS();                // SOS - International distress signal



  private:
    // Morse Code variables
    int _pin;            // The pin that the piezo buzzer and/or LED is attached to
    int _freq;           // Sets the frequency if you are using a piezo ( Uno, Mega, Leonardo and other AVR boards 31–65535, Zero 41—275000); set to 0 to use an LED with no buzzer
    int _unit;           // The duration of all dots, dashes and spaces in Morse Code are based on a Unit

};

#endif
