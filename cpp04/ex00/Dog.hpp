#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

private:

public:
	Dog();
	~Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);

	void   makeSound( void ) const;
};


#endif