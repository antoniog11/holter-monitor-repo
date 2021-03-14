
ECG Circuit and Troubleshooting: 3/8/21
========================================

The interface between the patient being monitored and the analog 
front end (AFE) circuitry is the electrode. The electrode is of 
paramount importance in ensuring adeauate signal reception for the 
AFE. I have spent so much time trying to debug my ECg circuit only to 
realize that the electrodes were too dry or defective. I have lost 
countless hours trying to determine why I wasn't getting a proper 
signal; I was checking voltages, resitor values, lead placement, 
grounding, and the power supply, only to finally realize that the 
electrodes were the source of all my troubles. Going forward, 
electrode difficulties should be checked first when debugging an ECG 
circuit. 

ECG Resolution and ADC Limitations: 3/14/21
============================================

The Arduino only has a a 10 bit ADC which gives us a minimum voltage resolution of VCC / 2^10. Running off 
of 5 volts this means the smallest voltage difference we can measure is about 4.8 mV. In terms of ECG 
processing that isnt that small. No matter how good of an AFE we use to filter our signal, we wont be able 
to achieve clinical level ECG quality. The most important design choices then for this holter monitor 
should be figuring out how to eliminate or minimize noise caused by movement. This means we are concerned 
with lower frequency components like baseline drift.  
