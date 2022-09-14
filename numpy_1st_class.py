# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy as np
import matplotlib.pyplot as plt

    #Creating Array


a1=np.array([1,34,6,7,8])
a2=np.zeros(10)
a3=np.ones(10)

#random number genarate
a4=np.random.random(10)

#negative random
a5=np.random.randn(10)


#created a array who have 100 values which start from 0 to 10 and all are equally divided

a6=np.linspace(0, 10,100)
    #print(a6)

#linspace e amara total koyta vlaue thakbe seta define kore di but arange e amra 1st limit to last limit prjonto value gula diye di plus last parameter e amra distance ta diye di
a7=np.arange(0,10,0.5)
    #print(a7)




    #Array Operation
    
    
#pura array ta ke kot kora jay    
    #print(2*a1)
    #print(1/a1+a1+2)
    #print(1/a1)
    #print(5+a1)
    #print(5-a1)

#prothita value er jonno akta sepcific condition er boolean answare pawa jay
    #print(a1<4)
    

x=np.linspace(1, 100,100) 
y=x**2
#print(y)
#plt.plot(x,y)
#plt.show()
#plt.hist(a1)
#plt.show()


#Using Function

def f(x):
    return x**2 * np.sin(x)/np.exp(-x)

x=np.linspace(0, 10,100)
y=f(x)
#plt.plot(x,y)


    #Array Indexing/Slicing
    

a1=np.array([10,11,12,14,15,18])
#print(a1[1])

##2 no index to last
#print(a1[2:])

##last er duita baaddiye baki sob gula
#print(a1[:-2])

##1 index theek shuru korbe and pichon theke 3 ta baad jabe
#print(a1[1:-3])




