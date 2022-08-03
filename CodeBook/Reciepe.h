#pragma once
#include "Header.h"
#include "Container.h"
#include "Ingredient.h"
class Reciepe:public Container<Ingredient>
{
private:
	double allcost;
public:
	Reciepe();
	Reciepe(int);
	double totalcost();
};

