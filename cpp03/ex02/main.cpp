#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap_Hero("ClapTrap_Hero");
	ClapTrap ClapTrap_Enemie("ClapTrap_Enemie");
	std::cout << std::endl;

	ScavTrap ScavTrap_Hero("ScavTrap_Hero");
	ScavTrap ScavTrap_Enemie("ScavTrap_Enemie");
	std::cout << std::endl;

	FragTrap FragTrap_Hero("FragTrap_Hero");
	FragTrap FragTrap_Enemie("FragTrap_Enemie");
	std::cout << std::endl;

	ClapTrap_Hero.attack("ClapTrap_Enemie");
	ClapTrap_Enemie.takeDamage(0);
	ClapTrap_Hero.beRepaired(5);
	std::cout << std::endl;

	ScavTrap_Hero.attack("ScavTrap_Enemie");
	ScavTrap_Enemie.takeDamage(20);
	ScavTrap_Hero.beRepaired(10);
	ScavTrap_Hero.guardGate();
	ScavTrap_Enemie.guardGate();
	std::cout << std::endl;

	FragTrap_Hero.attack("FragTrap_Enemie");
	FragTrap_Enemie.takeDamage(30);
	FragTrap_Hero.beRepaired(15);
	FragTrap_Hero.highFivesGuys();
	FragTrap_Enemie.highFivesGuys();
	std::cout << std::endl;

}
