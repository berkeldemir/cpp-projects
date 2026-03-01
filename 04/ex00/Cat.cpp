#include "./Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << CAT << CONSTR; }

Cat::Cat(const Cat& ref) : Animal(ref) {
	this->type = ref.type;
	std::cout << CAT << CPYCONSTR; }

Cat &Cat::operator=(const Cat& ref) {
	this->type = ref.type;
	std::cout << CAT << ASGNCONSTR;
	return (*this); }

Cat::~Cat()	{
	std::cout << CAT << DESTR; }

void	Cat::makeSound(void) const {
	std::cout << CAT << "MIYAAVV MIYAAVVV!" << std::endl; }