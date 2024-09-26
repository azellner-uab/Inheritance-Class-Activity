//main.cpp
//Inheritance class activity

#include <iostream>
#include <string>
#include "shelter.h"
#include "animal.h"
std::vector<Animal> animals;
void addAnimal(Shelter shelter);

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
	while (choice !=4){	
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
	std::cout << "\nWelcome to the shelter!" << std::endl;
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

	std::cout << "ADD NEW ANIMAL\n";
	std::cout << "---------------------\n";
	std::cout << "Enter name of animal: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "Enter age (int): ";
	std::cin >> age;
	std::cout << std::endl;
	std::cout << "Enter breed ('Dog' or 'Cat'): ";
	std::cin >> breed;
	std::cout << std::endl;

	Animal a(name, age, breed);
	animals.push_back(a);
	a.displayInfo();

	shelter.addAnimal(&(animals[animals.size() - 1]));
}



