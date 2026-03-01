#include "./Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << DOG << CONSTR; }

Dog::Dog(const Dog& ref) : Animal(ref) {
	this->type = ref.type;
	std::cout << DOG << CPYCONSTR; }

Dog &Dog::operator=(const Dog& ref) {
	this->type = ref.type;
	std::cout << DOG << ASGNCONSTR;
	return (*this); }

Dog::~Dog()	{
	delete this->brain;
	std::cout << DOG << DESTR; }

void	Dog::makeSound(void) const {
	std::cout << DOG << "HAV HAVV!" << std::endl; }

void	Dog::setIdea(std::string newone) const {
	this->brain->setIdea(newone); }

void	Dog::putIdeas(void) const {
	this->brain->putIdeas(); }
