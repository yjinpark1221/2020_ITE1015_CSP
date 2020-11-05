#include "animal.h"


Animal::Animal(std::string name, int numberOfLegs) : name(name), numberOfLegs(numberOfLegs) {}
Animal::~Animal() {}

Cat::Cat() : Animal("cat", 4) {}
Cat::~Cat() {}
std::string Cat::talk() const { return "meow"; }
std::string Cat::getName() const { return name; }
int Cat::getNumberOfLegs() const { return numberOfLegs; }

Dog::Dog() : Animal("dog", 4) {}
Dog::~Dog() {}
std::string Dog::talk() const { return "woof"; }
std::string Dog::getName() const { return name; }
int Dog::getNumberOfLegs() const { return numberOfLegs; }

Pig::Pig() : Animal("pig", 4) {}
Pig::~Pig() {}
std::string Pig::talk() const { return "oink"; }
std::string Pig::getName() const { return name; }
int Pig::getNumberOfLegs() const { return numberOfLegs; }

Duck::Duck() : Animal("duck", 2) {}
Duck::~Duck() {}
std::string Duck::talk() const { return "quak"; }
std::string Duck::getName() const { return name; }
int Duck::getNumberOfLegs() const { return numberOfLegs; }
