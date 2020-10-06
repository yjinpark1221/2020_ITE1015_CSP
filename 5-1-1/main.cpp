#include "sorted.h"
#include <iostream>
#include <string>
#include <sstream>
void printIntVector(std::vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    SortedArray sa;
    std::string q;
    while (std::getline(std::cin, q) && q != "quit") {
        if (q == "add") {
            std::string s;
            std::stringstream ss;
            getline(std::cin, s);
            ss.str(s);
            int n;
            while (ss >> n) {
                sa.AddNumber(n);
            }
        }
        else if (q == "ascend") {
            printIntVector(sa.GetSortedAscending());
        }
        else if (q == "descend") {
            printIntVector(sa.GetSortedDescending());
        }
        else if (q == "max") {
            std::cout << sa.GetMax() << "\n";
        }
        else if (q == "min") {
            std::cout << sa.GetMin() << "\n";
        }
    }
    return 0;
}


