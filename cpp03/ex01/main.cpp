#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap_Hero("ClapTrap_Hero");
	ClapTrap ClapTrap_Enemie("ClapTrap_Enemie");

	ScavTrap ScavTrap_Hero("ScavTrap_Hero");
	ScavTrap ScavTrap_Enemie("ScavTrap_Enemie");

	ClapTrap_Hero.attack("ClapTrap_Enemie");
	ClapTrap_Enemie.takeDamage(0);
	ClapTrap_Hero.beRepaired(5);

	ScavTrap_Hero.attack("ScavTrap_Enemie");
	ScavTrap_Enemie.takeDamage(0);
	ScavTrap_Hero.beRepaired(5);
	ScavTrap_Hero.guardGate();
	ScavTrap_Enemie.guardGate();
}
