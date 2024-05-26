#include <iostream>
using namespace std;

class Time
{
public:
    Time(void);
    Time(int, int);
    Time(const Time&);
    Time& operator=(const Time&);
    Time operator*(int k);
    friend ostream& operator<<(ostream& out, const Time&);
    friend istream& operator>>(istream& in, Time&);

private:
    int min, sec;
};