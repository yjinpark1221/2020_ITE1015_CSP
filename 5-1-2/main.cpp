#include "intset.h"
#include <iostream>
#include <string>
void printIntSet(std::vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    IntegerSet is;
    std::string q;
    while (std::cin >> q && q != "quit") {
        int n;
        std::cin >> n;
        if (q == "add") {
            is.AddNumber(n);
            printIntSet(is.GetAll());
        }
        else if (q == "del") {
            is.DeleteNumber(n);
            printIntSet(is.GetAll());
        }
        else if (q == "get") {
            std::cout << is.GetItem(n) << "\n";
        }
    }
    return 0;
}
