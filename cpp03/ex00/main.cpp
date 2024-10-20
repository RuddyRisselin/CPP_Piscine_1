#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Hero("Hero");
	ClapTrap Enemie("Enemie");

	Hero.attack("Enemie");
	Enemie.takeDamage(0);
	Hero.beRepaired(5);
}