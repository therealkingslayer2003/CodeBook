#pragma once
#include "Product.h"
class Ingredient :
    public Product
{
private:
    double dose;
public:
    Ingredient();
    Ingredient(string, double, double);
	Ingredient(double);
	friend ostream& operator<<(ostream&, const Ingredient&);
	friend istream& operator>>(istream&, Ingredient&);
	Ingredient& operator=(const Ingredient&);
	Ingredient operator+(int);
	Ingredient operator-(int);
	void print();
};

