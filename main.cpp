//main.cpp
//Inheritance class activity

#include <iostream>
#include <string>
#include "shelter.h"
#include "animal.h"
#include "dog.h"
#include "cat.h"


int main(){
	
	Shelter shelter;

	int choice=0;
	std::cout << "Welcome to the shelter!" << std::endl;
	std::cout << "1) Add a dog or cat" << std::endl;
	std::cout << "2) Remove animal by name" << std::endl;
	std::cout << "3) Display all animals" << std::endl;
	std::cout << "4) Exit program" << std::endl;
	std::cout << "Enter your choice (1-4): ";
	std::cin >> choice;
	std::cout << std::endl;
	while (choice>1 || choice<4){	
	switch(choice){
		case 1: 
			addAnimal(shelter);
			break;	
		case 2:
			shelter.removeAnimal("Test");
			break;
		case 3:
			shelter.displayAnimals();
			break;
		case 4:
			break;
		default: 	
			std::cout << "Please enter a valid input (1-4)" << std::endl;
	}
	std::cout << "Welcome to the shelter!" << std::endl;
	std::cout << "1) Add a dog or cat" << std::endl;
	std::cout << "2) Remove animal by name" << std::endl;
	std::cout << "3) Display all animals" << std::endl;
	std::cout << "4) Exit program" << std::endl;
	std::cout << "Enter your choice (1-4): ";
	std::cin >> choice;
	std::cout << std::endl;
	}

	return 0;
}

void addAnimal(Shelter shelter){
	
	std::string name= ""; 
	int age=0;
	std::string breed= "";
	std::cout << "Enter name of animal: ";
	std::cin >> name;
	std::cout << std::endl;

	shelter.addAnimal(&Animal(name, age, breed));
}



