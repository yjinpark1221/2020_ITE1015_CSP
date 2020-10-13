#include "animals.h"
#include <iostream>
Animal::Animal() {};
Animal::Animal(std::string name_, int age_) {
    this->name = name_;
    this->age = age_;
};
void Animal::printInfo() {};

Zebra::Zebra() {};
Zebra::Zebra(std::string name_, int age_, int numStripes_) : Animal(name_, age_)
{
    this->numStripes = numStripes_;
};
void Zebra::printInfo() {
    std::cout << "Zebra, Name: " << this->name << ", Age: " << this->age << ", Number of stripes: " << this->numStripes << "\n";
};

Cat::Cat() {};
Cat::Cat(std::string name_, int age_, std::string favoriteToy_) : Animal(name_, age_) 
{
    this->favoriteToy = favoriteToy_;
};
void Cat::printInfo() {
    std::cout << "Cat, Name: " << this->name << ", Age: " << this->age << ", Favorite toy: " << this->favoriteToy << "\n";
};
