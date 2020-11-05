#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>
class Animal {
protected:
    std::string name;
    int numberOfLegs;
public:
    Animal(std::string, int);
    virtual ~Animal();
    virtual std::string talk() const = 0;
    virtual std::string getName() const = 0;
    virtual int getNumberOfLegs() const = 0;
};
class Cat : public Animal {
public:
    Cat();
    ~Cat();
    virtual std::string talk() const;
    virtual std::string getName() const;
    virtual int getNumberOfLegs() const;
};
class Dog : public Animal {
public:
    Dog();
    ~Dog();
    virtual std::string talk() const;
    virtual std::string getName() const;
    virtual int getNumberOfLegs() const;
};
class Pig : public Animal {
public:
    Pig();
    ~Pig();
    virtual std::string talk() const;
    virtual std::string getName() const;
    virtual int getNumberOfLegs() const;
};
class Duck : public Animal {
public:
    Duck();
    ~Duck();
    virtual std::string talk() const;
    virtual std::string getName() const;
    virtual int getNumberOfLegs() const;
};

#endif
