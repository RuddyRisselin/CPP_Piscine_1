#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {

protected:
	std::string _type;
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& src);
	AAnimal& operator=(const AAnimal& rhs);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif