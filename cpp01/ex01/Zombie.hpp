#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie {

private:
	std::string name;
public:
	Zombie();
	~Zombie(void);
	void announce(void);
	void setZombieName(std::string name);
};


#endif