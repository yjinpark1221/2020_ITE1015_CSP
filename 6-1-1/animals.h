#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;
    int age;
public:
    Animal();
    Animal(std::string, int);
    virtual void printInfo();
};

class Zebra : public Animal {
private:
    int numStripes;
public:
    Zebra();
    Zebra(std::string, int, int);
    void printInfo();
};

class Cat : public Animal {
private:
    std::string favoriteToy;
public:
    Cat();
    Cat(std::string, int, std::string);
    void printInfo();
};

#endif
