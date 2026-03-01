#include "./Animal.hpp"

Animal::Animal() {
	this->type = "";
	std::cout << ANIMAL << CONSTR; }

Animal::Animal(const Animal& ref){
	this->type = ref.type;
	std::cout << ANIMAL << CPYCONSTR; }

Animal  &Animal::operator=(const Animal& ref) {
	this->type = ref.type; 
	std::cout << ANIMAL << ASGNCONSTR;
	return (*this); }

Animal::~Animal() {
	std::cout << ANIMAL << DESTR; }

std::string&	Animal::getType(void) {
	return (this->type); }

void	Animal::makeSound(void) const {
	std::cout << ANIMAL << "<< some breathing sound >>" << std::endl; }