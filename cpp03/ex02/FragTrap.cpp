#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefautName")
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Default constructor FragTrap called " << this->_name << " has been created " << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "constructor FragTrap called " << this->_name << " has been created " << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
    std::cout << "FragTrap " << this->_name << " has been copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_EnergyPoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " has no more energy!" << std::endl;
        return ;
    }
    _EnergyPoints -= 1;
    std::cout << "FragTrap " << this->_name << " : High Five ! " << std::endl;
	this->_EnergyPoints -= 1;
}