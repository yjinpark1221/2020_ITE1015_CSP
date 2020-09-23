#include <iostream>
#include "accounts.h"

int main() {
    AccountManager am;
    char command;
    while (1) {
        std::cout << "Job?\n";
        std::cin >> command;
        if (command == 'N') {
            am.create();
        }
        else if (command == 'D') {
            int id, amount;
            std::cin >> id >> amount;
            am.deposit(id, amount);
        }
        else if (command == 'W') {
            int id, amount;
            std::cin >> id >> amount;
            am.withdraw(id, amount);
        }
        else if (command == 'T') {
            int from, to, amount;
            std::cin >> from >> to >> amount;
            am.transfer(from, to, amount);
        }
        else if (command == 'Q') break;
    }
    return 0;
}

