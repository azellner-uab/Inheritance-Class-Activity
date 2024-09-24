#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
protected:
    std::string breed;

public:
    // Constructor
    Cat(const std::string& name, int age, const std::string& breed);

    void displayInfo() const override;
};

#endif 
