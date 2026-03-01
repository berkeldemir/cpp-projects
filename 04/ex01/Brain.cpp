#include "./Brain.hpp"

Brain::Brain() {
	std::cout << BRAIN << CONSTR; }

Brain::Brain(const Brain &ref) {
	std::cout << BRAIN << CPYCONSTR;
	for (int i = 0; i < ref.nextIndex; i++) {
		if (this->nextIndex >= 100)
			return ;
		(this->ideas)[i] = (ref.ideas)[i];
		nextIndex++; }}

Brain&	Brain::operator=(const Brain& ref) {
	std::cout << BRAIN << ASGNCONSTR;
	for (int i = 0; i < ref.nextIndex; i++) {
		if (this->nextIndex >= 100)
			return (*this);
		(this->ideas)[i] = (ref.ideas)[i];
		nextIndex++; }
	return (*this); }

Brain::~Brain() {
	std::cout << BRAIN << DESTR; }

void	Brain::setIdea(std::string newone) {
	if (nextIndex >= 100)
		return ;
	(this->ideas)[this->nextIndex] = newone;
	this->nextIndex++; }

void	Brain::putIdeas(void) const {
	for (int i = 0; i < this->nextIndex; i++)
		std::cout << i << ": " << (this->ideas)[i] << std::endl; }
