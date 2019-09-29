#include "serial.h"
#include <iostream>

using namespace std;

int main()
{
    TSerial serial("/dev/ttyUSB1", 2000000);
    serial.open();
    const char* str;
    while(true)
    {
        str = serial.readline();
        std:: cout << str;
    }

    return 0;
}

