#include "calendar.h"
int MyCalendar::dayOfMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
MyCalendar::MyCalendar() : _year(0), _month(1), _day(1) {}
MyCalendar::MyCalendar(int year, int month, int day) : _year(year), _month(month), _day(day) {}
void MyCalendar::NextDay(int n = 1) {
    int allDay = ComputeDaysFromYearStart(_year, _month, _day);
    allDay += n;
    if (allDay < 1) {
        std::cout << "Invalid date\n";
        return;
    }
    int y, m, d;
    int countDay = 0;
    for (y = 0; countDay + GetDaysInYear(y) < allDay; ++y) {
        countDay += GetDaysInYear(y);
    }
    for (m = 1; countDay + GetDaysOfMonth(y, m) < allDay; ++m) {
        countDay += GetDaysOfMonth(y, m);
    }
    d = allDay - countDay;
    if (y > 9999) {
        std::cout << "Invalid date\n";
        return;
    }
    _year = y;
    _month = m;
    _day = d;
}
int MyCalendar::GetDaysOfMonth(int y, int m) {
    if (m == 2 && GetDaysInYear(y) == 366) {
        return 29;
    } else {
        return dayOfMonth[m];
    }
}
bool MyCalendar::SetDate(int year, int month, int day) {
    if (0 <= year && year <= 9999 && 0 < month && month <= 12 && 0 < day && day <= GetDaysOfMonth(year, month)) {
        _year = year;
        _month = month;
        _day = day;
        return true;
    }
    std::cout << "Invalid date: " << year << "." << month << "." << day << "\n";
    return false;
}
int MyCalendar::year() const {
    return _year;
}
int MyCalendar::month() const {
    return _month;
}
int MyCalendar::day() const {
    return _day;
}
int MyCalendar::GetDaysInYear(int year) {
    if (year % 400 == 0) return 366;
    else if (year % 100 == 0) return 365;
    else if (year % 4 == 0) return 366;
    else return 365;
}
int MyCalendar::ComputeDaysFromYearStart(int year, int month, int day) {
    int ret = 0;
    for (int y = 0; y < year; ++y) {
        ret += GetDaysInYear(y);
    }
    for (int m = 1; m < month; ++m) {
        ret += GetDaysOfMonth(year, m);
    }
    ret += day;
    return ret;
}    
    
std::ostream& operator<<(std::ostream& os, const MyCalendar& c) {
    os << c.year() << "." << c.month() << "." << c.day();
    return os;
}
std::istream& operator>>(std::istream& is, MyCalendar& c) {
    std::string y, m, d;
    std::getline(is, y, '.');
    std::getline(is, m, '.');
    std::getline(is, d);
    c.SetDate(std::stoi(y), std::stoi(m), std::stoi(d));
}
