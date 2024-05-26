#include "Time.h" 
Time::Time(void) : min(0), sec(0) {}
Time::Time(int m, int s) : min(m), sec(s) {}
Time::Time(const Time& t) : min(t.min), sec(t.sec) {}
Time& Time::operator=(const Time& t) {
    if (this == &t) return *this;
    min = t.min;
    sec = t.sec;
    return *this;
}

Time Time::operator*(int k) {
    int totalSeconds = (min * 60 + sec) * k;
    int resultMin = totalSeconds / 60;
    int resultSec = totalSeconds % 60;
    return Time(resultMin, resultSec);
}

ostream& operator<<(ostream& out, const Time& t) {
    out << t.min << ":" << t.sec;
    return out;
}

istream& operator>>(istream& in, Time& t) {
    in >> t.min >> t.sec;
    return in;
}

