#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private :
	ScavTrap();
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &src);
	ScavTrap& operator=(const ScavTrap &rhs);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif