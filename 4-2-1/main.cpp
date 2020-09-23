#include "fighter.h"
#include <iostream>
int main() {
    Fighter* f1 = new Fighter(10, 0);  //skeleton
    Fighter* f2 = new Fighter();
    f2 -> setHp(10);
    f2 -> setPower(0);
    f2 -> setStatus(true);

    char command;
    while(1) {
        std::cout << "F1: " << f1 -> getHp() << ", " << f1 -> getPower() << "; ";
        std::cout << "F2: " << f2 -> getHp() << ", " << f2 -> getPower() << ";\n";
        
        std::cin >> command;
        
        if (command == 'H') {          // hit
            int f;
            std::cin >> f;
            if (f == 1) f1 -> hit(f2);
            else f2 -> hit(f1);
        }
        else if (command == 'A') {     // attack
            int f;
            std::cin >> f;
            if (f == 1) f1 -> attack(f2);
            else f2 -> attack(f1);
        }
        else if (command == 'P') {     // emPower
            int f, p;
            std::cin >> f >> p;
            if(f == 1) f1 -> emPower(p);
            else f2 -> emPower(p);
        }
        else if (command == 'Q') {
            break;
        }
        else {                         //command typos
            break;
        }
        if (f1 -> getStats() == 0) {
            std::cout << "F1: DEAD;\n";
            break;
        }
        else if (f2 -> getStats() == 0) {
            std::cout << "F2: DEAD;\n";
            break;
        }
    }
    return 0;
}
