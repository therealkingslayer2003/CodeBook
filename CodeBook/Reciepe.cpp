#pragma once
#include "Reciepe.h"
Reciepe::Reciepe() :Container<Ingredient>() {
	allcost = 0;
}
Reciepe::Reciepe(int value) : Container<Ingredient>(value) {
	allcost = 0;
}
double Reciepe::totalcost() {
	for (int i = 0; i < size; i++) {
		allcost += info[i].GetCost();
	}
	return allcost;
}

