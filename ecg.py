# -*- coding: utf-8 -*-
"""
Created on Sun Feb  7 22:16:37 2021

@author: Antonio
"""

"""
Script to create ECG signal from text file for LTSPICE modelling
"""
import matplotlib.pyplot as plt

f = open('ECG-LTSPICE.txt')
text = f.read()
text = text[1:-1].split()

y_values = [float(text[i]) for i in range(1,len(text),2)]
print(len(y_values))

y = []
for i in range(0,10):
    for i in y_values:
        y.append(i)
    
x = list(range(0,10100,10))

plt.plot(x,y)

with open('ECG_LTSPICE_Signal.txt','w+') as f:
    f.write('(')
    f.write(str(x[0]) + ' ')
    f.write(str(y[0]) + ' ')
    for i in range(1,len(x) - 1):
        f.write(str(x[i]) + 'm ')
        f.write(str(y[i]) + ' ')
    f.write(str(x[-1]) + 'm ')
    f.write(str(y[-1]))
    f.write(')')