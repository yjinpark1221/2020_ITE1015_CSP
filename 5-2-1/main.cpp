#include "message.h"
#include <iostream>

int main() {
    std::string q;
    MessageBook mb;
    while (std::cin >> q && q != "quit") {
        if (q == "add") {
            int phoneNumber;
            std::string message;
            std::cin >> phoneNumber;
            std::getline(std::cin, message);
            mb.AddMessage(phoneNumber, message.substr(1));
        }
        else if (q == "delete") {
            int phoneNumber;
            std::cin >> phoneNumber;
            mb.DeleteMessage(phoneNumber);
        }
        else if (q == "print") {
            int phoneNumber;
            std::cin >> phoneNumber;
            std::cout << mb.GetMessage(phoneNumber) << "\n";
        }
        else if(q == "list") {
            std::vector<int> v = mb.GetNumbers();
            for (auto it = v.begin(); it != v.end(); ++it) {
                std::cout << *it << ": " << mb.GetMessage(*it) << "\n";
            }
        }
    }
    return 0;
}
