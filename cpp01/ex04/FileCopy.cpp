#include "FileCopy.hpp"

FileCopy::FileCopy(std::string filename) : _in(filename)
{
	this->_out = this->_in + ".replace";
}

FileCopy::~FileCopy(void)
{
}

void	FileCopy::replaceStr(std::string s1, std::string s2)
{
	std::ifstream ifs(this->_in.c_str());
	if (ifs.is_open())
	{
		std::string content;
		if (std::getline(ifs, content, '\0'))
		{
			std::ofstream	ofs(this->_out.c_str());
			size_t			pos = content.find(s1);
			while (pos != std::string::npos)
			{
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1);
			}
			ofs << content;
			ofs.close();
		}
		else
			std::cerr << "File is Empty.\n";
		ifs.close();
	}
	else
		std::cerr << "the file cannot be opened.\n";
}