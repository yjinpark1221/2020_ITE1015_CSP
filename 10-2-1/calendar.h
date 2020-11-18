#include <string>
#include <iostream>
class MyCalendar {
public:
    MyCalendar();
    MyCalendar(int year, int month, int day);
    void NextDay(int n);
    bool SetDate(int year, int month, int day);
    int year() const;
    int month() const;
    int day() const;
private:
    static int GetDaysInYear(int year);
    static int GetDaysOfMonth(int year, int month);
    static int ComputeDaysFromYearStart(int year, int month, int day);
    int _year, _month, _day;
    static int dayOfMonth[13];
};
// the format is yyyy.mm.dd
std::ostream& operator<<(std::ostream& os, const MyCalendar& c);
std::istream& operator>>(std::istream& is, MyCalendar& c);
