#ifndef FILECOPY_HPP
#define FILECOPY_HPP

#include <iostream>
#include <fstream>

class FileCopy {

private:
	std::string _in;
	std::string _out;
public:
	FileCopy(std::string filename);
	~FileCopy();
	void replaceStr(std::string s1, std::string s2);
};

#endif