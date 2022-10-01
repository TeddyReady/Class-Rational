#ifndef _RATIONAL_
#define _RATIONAL_
#include <iostream>
int gcd(int , int);

class Rational{
    int num, den;
    public:
        Rational();
        Rational(int, int);

        Rational simplify();

        Rational operator-()         const;
        Rational operator+(Rational) const;
        Rational operator+=(Rational);
        Rational operator-(Rational) const;
        Rational operator-=(Rational);
        Rational operator*(Rational) const;
        Rational operator*=(Rational);
        Rational operator/(Rational) const;
        Rational operator/=(Rational);

        bool operator==(Rational) const;
        bool operator!=(Rational) const;
        bool operator<(Rational)  const;
        bool operator<=(Rational) const;
        bool operator>(Rational)  const;
        bool operator>=(Rational) const;

        operator int() const;
        operator double()const;

        friend std::ostream& operator<<(std::ostream&, const Rational&);
        friend std::istream& operator>>(std::istream&, Rational&);

};
#endif