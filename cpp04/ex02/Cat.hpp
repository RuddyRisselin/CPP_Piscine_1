#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat &src);
	~Cat();
	Cat &operator=(const Cat &rhs);
	void   makeSound( void ) const;
};



#endif