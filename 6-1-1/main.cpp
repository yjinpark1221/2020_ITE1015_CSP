#include "animals.h"
#include <iostream>
#include <vector>

int main() {
    char q;
    std::vector<Animal*> v;
    while (std::cin >> q && q != '0') {
        if (q == 'z') {
            std::string name;
            int age, numStripes;
            std::cin >> name >> age >> numStripes;
            Zebra* z = new Zebra(name, age, numStripes);
            v.push_back(z);
        }
        else if (q == 'c') {
            std::string name, favoriteToy;
            int age;
            std::cin >> name >> age >> favoriteToy;
            Cat* c = new Cat(name, age, favoriteToy);
            v.push_back(c);
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        v[i]->printInfo();
        delete v[i];
    }
    return 0;
}

