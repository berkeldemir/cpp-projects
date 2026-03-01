#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "";
	std::cout << WR_ANIMAL << CONSTR; }

WrongAnimal::WrongAnimal(const WrongAnimal& ref){
	this->type = ref.type;
	std::cout << WR_ANIMAL << CPYCONSTR; }

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal& ref) {
	this->type = ref.type; 
	std::cout << WR_ANIMAL << ASGNCONSTR;
	return (*this); }

WrongAnimal::~WrongAnimal() {
	std::cout << WR_ANIMAL << DESTR; }

std::string&	WrongAnimal::getType(void) {
	return (this->type); }

void	WrongAnimal::makeSound(void) const {
	std::cout << "<< some breathing sound >>" << std::endl; }