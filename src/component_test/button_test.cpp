#include <iostream>
#include <wiringPi.h>

using namespace std;

int main()
{
    wiringPiSetup();
    int Beeper = 1 ;// define LED Interface
    int buttonpin = 14; // define the key switch sensor interface 
    int val;// define numeric variables val
    pinMode (Beeper, OUTPUT); // define LED as output interface
    pullUpDnControl(buttonpin, PUD_UP);
    pinMode (buttonpin, INPUT); // define the key switch sensor output interface
    
    while (1)
    {
        val = digitalRead (buttonpin); // digital interface will be assigned a value of 3 to read val
        printf("%d\n", val);
        if (val == 1) // When the key switch when the sensor detects a signal, LED flashes
        {
            digitalWrite (Beeper, 0);
            //printf("0\n");
        }
        else 
        {
            digitalWrite (Beeper, 1);
            //printf("1\n");
        }
    }

}