#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int _n;
	static const int _bits = 8;
public:
	Fixed(void);
	Fixed(const int to_cpy);
	Fixed(const Fixed &nbr);
	Fixed(const float nbr);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif