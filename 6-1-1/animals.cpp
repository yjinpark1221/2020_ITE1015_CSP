#include "animals.h"
#include <iostream>

Animal::Animal() {}
Animal::Animal(std::string name, int age) : name(name), age(age) {}
void Animal::printInfo() {}

Zebra::Zebra() {}
Zebra::Zebra(std::string name, int age, int numStripes) : Animal(name, age), numStripes(numStripes) {}
void Zebra::printInfo() {
    std::cout << "Zebra, Name: " << this->name << ", Age: " << this->age << ", Number of stripes: " << this->numStripes << "\n";
}

Cat::Cat() {}
Cat::Cat(std::string name, int age, std::string favoriteToy) : Animal(name, age), favoriteToy(favoriteToy) {} 
void Cat::printInfo() {
    std::cout << "Cat, Name: " << this->name << ", Age: " << this->age << ", Favorite toy: " << this->favoriteToy << "\n";
}
