#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string _type;
public:
	Animal();
	~Animal();
	Animal(std::string type);
	Animal(const Animal& src);
	Animal& operator=(const Animal& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif