#include "./WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << WR_CAT << CONSTR; }

WrongCat::WrongCat(const WrongCat& ref) : WrongAnimal(ref) {
	this->type = ref.type;
	std::cout << WR_CAT << CPYCONSTR; }

WrongCat &WrongCat::operator=(const WrongCat& ref) {
	this->type = ref.type;
	std::cout << WR_CAT << ASGNCONSTR;
	return (*this); }

WrongCat::~WrongCat()	{
	std::cout << WR_CAT << DESTR; }

void	WrongCat::makeSound(void) const {
	std::cout << WR_CAT << "MIYAAVV MIYAAVVV!" << std::endl; }