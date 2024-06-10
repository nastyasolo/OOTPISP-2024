#include <iostream>
using namespace std;

class Time
{
public:
    Time(void);
    Time(int, int);
    Time(const Time&);
    Time& operator=(const Time& t) {
        if (this == &t) return *this;
        min = t.min;
        sec = t.sec;
        return *this;
    }
    Time operator*(int k);
    friend ostream& operator<<(ostream& out, const Time& t) {
        out << t.min << ":" << t.sec;
        return out;
    }
    friend istream& operator>>(istream& in, Time& t) {
        in >> t.min >> t.sec;
        return in;
    }

private:
    int min, sec;
};
