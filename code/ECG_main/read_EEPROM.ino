#include <EEPROM.h>

//int EEPROM_WRITE = 1; // IF 1, write ECG data to EEPROM
//EEPROM.write(1,EEPROM_WRITE);


void read_EEPROM(void)
{
   if (EEPROM.read(1) == 0)
   {
      for (int i=1; i < EEPROM.length(); i++)
      {
         int ecg = analogRead(A1);
         EEPROM.write(i,ecg);
      }
   }
   else
   {
      for (int i=7;i < EEPROM.length() - 5;i++)
      {
         int x1 = EEPROM.read(i-5);
         int x2 = EEPROM.read(i-4);
         int x3 = EEPROM.read(i-3);
         int x4 = EEPROM.read(i-2);
         int x5 = EEPROM.read(i-1);
         int x6 = EEPROM.read(i);
         int sum = (x1 + x2 + x3 + x4 + x5 + x6) / 6;
         Serial.println(sum);
         //Serial.print(' ');
         //Serial.println(x1);
         //Serial.print(' ');

      }
   }
}


