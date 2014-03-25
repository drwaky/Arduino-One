/********
 * |)|2\/\//-\|<`/
 **
 * Arduino - One - 13th LED Blink
 **
 * @author     Joaquin Lopez <drwaky@gmail.com> - 
 * @twitter    @drwaky
 * @bitbucket  drwaky
 * @github     drwaky
 * @copyright  Copyright (c) 2014, DrWaky
 * @version    1.0
 * @date       2014/02/25
 * @license    GPLv3 - https://www.gnu.org/licenses/gpl-3.0.html
 * @category   Arduino
 **
 Based on Arduino documentation - Turn on the 13th LED (Pin 13 has an LED
 connected on most Arduino boards) for 100ms, then off for another 100ms,
 repeatedly.
 **/

int led = 13; // A name for the 13th pin.

// The "setup" procedure runs once at the beginning and when you press reset:
void setup() {
  pinMode(led, OUTPUT); // Initialize the digital pin as an output.
}

// The "loop" procedure runs again and again forever:
void loop() {
  digitalWrite(led, HIGH); // LED on (making the voltage HIGH on the selected pin).
  delay(100);              // Wait for 100ms.
  digitalWrite(led, LOW);  // LED off (making the voltage LOW on the selected pin).
  delay(100);              // Wait for another 100ms.
}
