#include "./Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << CAT << CONSTR; }

Cat::Cat(const Cat& ref) : Animal(ref) {
	this->type = ref.type;
	std::cout << CAT << CPYCONSTR; }

Cat &Cat::operator=(const Cat& ref) {
	this->type = ref.type;
	std::cout << CAT << ASGNCONSTR;
	return (*this); }

Cat::~Cat()	{
	delete this->brain;
	std::cout << CAT << DESTR; }

void	Cat::makeSound(void) const {
	std::cout << CAT << "MIYAAVV MIYAAVVV!" << std::endl; }

void	Cat::setIdea(std::string newone) const {
	this->brain->setIdea(newone); }

void	Cat::putIdeas(void) const {
	this->brain->putIdeas(); }
