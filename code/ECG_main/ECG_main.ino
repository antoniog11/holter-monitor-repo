// filters out changes faster that 5 Hz.
//#include <Filters.h>

//float filterFrequency = 8;
//float HighpassFrequency = 1;

// create a one pole (RC) lowpass filter
//FilterOnePole lowpassFilter( LOWPASS, filterFrequency );
//FilterOnePole highpassFilter( HIGHPASS, HighpassFrequency);

int buffer[10];

void setup()
{
   Serial.begin(9600);

}

void loop()
{
   int ecg = read_ECG();
   Serial.println(ecg);


}
