#include "animal.h"
#include <iostream>
#include <vector>
#include <sstream>
int main() {
    std::vector <Animal*> v;
    std::string s;
    std::stringstream ss;
    std::string animal;
    getline(std::cin, s);
    ss.str(s);
    while (ss >> animal) {
        if (animal == "cat") {
            Animal* cat = new Cat();
            v.push_back(cat);
        }
        else if (animal == "dog") {
            Animal* dog = new Dog();
            v.push_back(dog);
        }
        else if (animal == "pig") {
            Animal* pig = new Pig();
            v.push_back(pig);
        }
        else if (animal == "duck") {
            Animal* duck = new Duck();
            v.push_back(duck);
        }
    }
    int cat = 0, dog = 0, pig = 0, duck = 0, totalLegs = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << (*it)->talk() << " ";
        if ((*it)->getName() == "cat") ++cat;
        else if ((*it)->getName() == "dog") ++dog;
        else if ((*it)->getName() == "pig") ++pig;
        else if ((*it)->getName() == "duck") ++duck;
        totalLegs += (*it)->getNumberOfLegs();
    }
    std::cout << "\nWe have " << cat << " cat";
    if (cat > 1) std::cout << "s";
    std::cout << ", ";
    std::cout << dog << " dog";
    if (dog > 1) std::cout << "s";
    std::cout << ", ";
    std::cout << pig << " pig";
    if (pig > 1) std::cout << "s";
    std::cout << ", and ";
    std::cout << duck << " duck";
    if (duck > 1) std::cout << "s";
    std::cout << ". \nThey have " << totalLegs << " legs. \n";
    return 0;
}
