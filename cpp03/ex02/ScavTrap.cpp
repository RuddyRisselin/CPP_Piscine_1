#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefautName")
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "Default constructor ScavTrap called " << this->_name << " has been created " << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "constructor ScavTrap called " << this->_name << " has been created " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
    std::cout << "ScavTrap " << this->_name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no more energy!" << std::endl;
        return ;
    }
    _EnergyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage 
		<< " points of damage." << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode" << std::endl;
}