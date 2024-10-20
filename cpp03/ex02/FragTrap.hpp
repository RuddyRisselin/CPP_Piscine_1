#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

private:
	FragTrap();
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &src);
	FragTrap& operator=(const FragTrap &rhs);
	~FragTrap();
	void highFivesGuys(void);
};

#endif
