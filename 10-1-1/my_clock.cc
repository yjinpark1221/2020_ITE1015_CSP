#include "my_clock.h"
void MyClock::Tick(int seconds) {
    seconds %= 86400;
    seconds += 86400;
    _sec += seconds;

    _min += _sec / 60;
    _sec %= 60;
    
    _hour += _min / 60;
    _min %= 60;
    
    _hour %= 24;
}
bool MyClock::SetTime(int hour, int minute, int second) {
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60) {
        _hour = hour;
        _min = minute;
        _sec = second;
        return true;
    }
    std::cout << "Invalid time: " << hour << ":" << minute << ":" << second << "\n";
    return false;
}

int MyClock::hour() const {
    return _hour;
}
int MyClock::minute() const {
    return _min;
}
int MyClock::second() const {
    return _sec;
}

std::ostream& operator<<(std::ostream& os, const MyClock& c) {
    os << c.hour() << ":" << c.minute() << ":" << c.second();
    return os;
}
std::istream& operator>>(std::istream& is, MyClock& c) {
    std::string h, m, s;
    std::getline(is, h, ':');
    std::getline(is, m, ':');
    std::getline(is, s);
    c.SetTime(std::stoi(h), std::stoi(m), std::stoi(s));
}
