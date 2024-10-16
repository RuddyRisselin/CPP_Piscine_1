#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int _n;
	static const int _bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &to_cpy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed &operator=(const Fixed &rhs);
};


#endif