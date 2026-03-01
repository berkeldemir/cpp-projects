#include "./Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << DOG << CONSTR; }

Dog::Dog(const Dog& ref) : Animal(ref) {
	this->type = ref.type;
	std::cout << DOG << CPYCONSTR; }

Dog &Dog::operator=(const Dog& ref) {
	this->type = ref.type;
	std::cout << DOG << ASGNCONSTR;
	return (*this); }

Dog::~Dog()	{
	std::cout << DOG << DESTR; }

void	Dog::makeSound(void) const {
	std::cout << DOG << "HAV HAVV!" << std::endl; }