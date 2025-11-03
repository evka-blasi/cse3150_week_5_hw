#ifndef FRACTION_H
#define FRACTION_H

#include "abstract_decimal.h"
#include <iostream>

class Fraction : public Decimal {
private:
	int* numer_;
	int* denom_;

public:
	Fraction();
	Fraction(int numerator, int denominator);
	Fraction(const Fraction& other);
	Fraction(Fraction&& other) noexcept;
	Fraction& operator=(const Fraction& other);
	Fraction& operator=(Fraction&& other) noexcept;
	~Fraction();

	double convertToDecimal() const override;

	friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);
	friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
	friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};

#endif
