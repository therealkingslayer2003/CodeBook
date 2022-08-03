#pragma once
#include "Header.h"
class Product
{
protected:
	string nameofproduct;
	double cost;
public:
	Product();
	Product(double);
	Product(string, double);
	friend ostream& operator<<(ostream&, const Product&);
	friend istream& operator>>(istream&, Product&);
	Product& operator=(const Product&);
	Product operator+(double);
	Product operator-(double);
	virtual void print();
	double GetCost();
};

