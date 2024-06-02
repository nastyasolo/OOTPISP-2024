#include "Time.h" 
Time::Time(void) : min(0), sec(0) {}
Time::Time(int m, int s) : min(m), sec(s) {}
Time::Time(const Time& t) : min(t.min), sec(t.sec) {}


Time Time::operator*(int k) {
    int totalSeconds = (min * 60 + sec) * k;
    int resultMin = totalSeconds / 60;
    int resultSec = totalSeconds % 60;
    return Time(resultMin, resultSec);
}



