#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor ClapTrap called " << this->_name << " has been created " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;  
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
		*this = rhs;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no more energy!" << std::endl;
        return ;
    }
    _EnergyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage." << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead " << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " has taken "  << amount << " damages " << std::endl;
    _HitPoints -= amount;
    if (_HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " died " << std::endl;
        return ;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy!" << std::endl;
        return ;
    }
    _EnergyPoints -= 1;
    _HitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repairing " << amount << " Hit points." << std::endl;
    return ;

}