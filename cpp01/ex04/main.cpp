#include "FileCopy.hpp"

int main(int argc, char *av[])
{
	if (argc != 4)
	{
		std::cerr << "Use: ./FileCopy <Infile> <str_to_find> <replace>." << std::endl;
		return (0);
	}
	else
	{
		FileCopy FileCopy(av[1]);
		FileCopy.replaceStr(av[2], av[3]);
	}
	return (0);
}