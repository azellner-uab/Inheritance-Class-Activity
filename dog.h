#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
protected:
    std::string breed;

public:
    // Constructor
    Dog(const std::string& name, int age, const std::string& breed);

    void displayInfo() const override;
};

#endif // DOG_H
