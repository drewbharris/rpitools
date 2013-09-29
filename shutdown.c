#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
  int switchPin = 7;
  int switchPin = 0;

  if (wiringPiSetup () == -1)
    return 1;

  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  pullUpDnControl(7, PUD_DOWN);

  digitalWrite(ledPin, 0);

  for (;;)
  {
    int readVal = digitalRead(switchPin);
    if (readVal == 1){
      digitalWrite(ledPin, 1);
      delay(200);
      digitalWrite(ledPin, 0);
      delay(200);
      digitalWrite(ledPin, 1);
      delay(200);
      digitalWrite(ledPin, 0);
      delay(200);
      digitalWrite(ledPin, 1);
      delay(200);
      digitalWrite(ledPin, 0);
      delay(200);
      system("sudo shutdown now");
    }
    delay(200);
  }
  return 0 ;
}
