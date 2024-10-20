#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:

public:
	Cat();
	Cat(const Cat &src);
	~Cat();
	Cat &operator=(const Cat &rhs);
	void   makeSound( void ) const;
};



#endif