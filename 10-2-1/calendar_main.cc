#include "calendar.h"
int a;
int main() {
    MyCalendar mc;
    std::string q, day;
    while (std::cin >> q && q != "quit") {
        if (q == "next") {
            std::cin >> day;
            if (day == "day") {
                mc.NextDay();
            } else {
                mc.NextDay(std::stoi(day));
            }
        } else if (q == "set") {
            std::cin >> mc;
        }
        std::cout << mc << "\n";
    }
    return 0;
}
