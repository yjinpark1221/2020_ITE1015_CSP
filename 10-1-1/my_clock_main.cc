#include "my_clock.h"
std::string q;
int main() {
    MyClock mc;
    while (std::cin >> q && q != "quit") {
        if (q == "set") {
            std::cin >> mc;
        }
        else if (q == "tick") {
            int s;
            std::cin >> s;
            mc.Tick(s);
        }
        std::cout << mc << "\n";
    }
    return 0;
}
