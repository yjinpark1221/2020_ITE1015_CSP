#include "my_string.h"
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string q;
    MyString ms1, ms2;
    for (; ;) {
        std::getline(std::cin, q);
        if (q == "new") {
            std::cout << "enter a\n";
            std::cin >> ms1;
            std::cout << "enter b\n";
            std::cin >> ms2;
        } else if (q == "quit") {
            break;
        } else {
            std::stringstream ss(q);
            std::string l, op;
            ss >> l >> op;
            if (op == "*") {
                MyString nms, pms;
                int r;
                ss >> r;
                if (l == "a") nms = ms1;
                else if (l == "b") nms = ms2;
                pms = nms * r;
                std::cout << pms << '\n';
            } else if (op == "+") {
                MyString nms1, nms2, pms;
                std::string r;
                ss >> r;
                if (l == "a") nms1 = ms1;
                else if (l == "b") nms1 = ms2;
                if (r == "a") nms2 = ms1;
                else if (r == "b") nms2 = ms2;
                pms = nms1 + nms2;
                std::cout << pms << '\n';
            }
        }
    }
    return 0;
}
