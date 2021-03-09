// filters out changes faster that 5 Hz.
//#include <Filters.h>
#include <EEPROM.h>

//float filterFrequency = 8;
//float HighpassFrequency = 1;

// create a one pole (RC) lowpass filter
//FilterOnePole lowpassFilter( LOWPASS, filterFrequency );   
//FilterOnePole highpassFilter( HIGHPASS, HighpassFrequency); 


void setup() {
  Serial.begin(9600);
  EEPROM.write(1,1);
  
}

void loop() {

  if(EEPROM.read(1) == 0){
    for(int i=1;i < EEPROM.length();i++){
    int ecg = analogRead(A1);
    EEPROM.write(i,ecg);
    }
  }else{
    for(int i=1;i < EEPROM.length();i++){
      int e = EEPROM.read(i);
      Serial.println(e);
    }
  }
 // for(int i=0;i < EEPROM.length();i++){
  //  Serial.println(EEPROM.read(i));
  //}
  //lowpassFilter.input(ecg);
  //float y = lowpassFilter.output();
  //highpassFilter.input(y);
  //float filtered_ECG = highpassFilter.output();

}
