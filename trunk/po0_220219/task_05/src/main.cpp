#include <iostream>
#include "Vector.h" 
#include "Time.h"

using namespace std;

int main()
{
    Time currentTime;
    cout << "Enter current time (minutes seconds): ";
    cin >> currentTime;
    cout << "Current time: " << currentTime << endl;

    Vector<Time> timeVectorA(5, currentTime);
    cout << "Enter values for time vector A (5 elements): ";
    cin >> timeVectorA;
    cout << "Time vector A: " << timeVectorA << endl;

    Vector<Time> timeVectorB(10, currentTime);
    cout << "Time vector B (size 10): " << timeVectorB << endl;

    timeVectorB = timeVectorA;
    cout << "Time vector B after assignment: " << timeVectorB << endl;

    cout << "Value of time vector A at index 2: " << timeVectorA[2] << endl;

    cout << "Length of time vector A: " << timeVectorA() << endl;

    Vector<Time> timeVectorC = timeVectorA * 10;
    cout << "Multiplying time vector A by 10: " << timeVectorC << endl;

    return 0;
}
