#include "Time.h"

Time::Time(std::string time)
{
    std::stringstream stri(time);
    char razd;
    stri >> minutes >> razd >> seconds;
}

bool Time::operator==(const Time& t) const
{
    return (minutes == t.minutes && seconds == t.seconds);
}
