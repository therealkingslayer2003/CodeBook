#include "Ingredient.h"
Ingredient::Ingredient() : Product(){
	dose = 0;
}
Ingredient::Ingredient(double dosevalue)
{
	dose = dosevalue;
}
Ingredient::Ingredient(string name, double c,double dos) :Product(name,c),dose(dos){}
ostream& operator<<(ostream& output, const Ingredient& object) {
	output << "===Інформація про інгрідієнт===" << endl;
	output << "Продукт: " << object.nameofproduct << endl;
	output << "Ціна(грн): " << object.cost << endl;
	output << "Дозування(г): " << object.dose << endl;
	return output;
}
istream& operator>>(istream& input, Ingredient& object) {
	cout << "===Введіть інформацію про інгрідієнт===" << endl;
	cout << "Назва продукту?: "; input >> object.nameofproduct; cout << endl;
	cout << "Ціна?(грн): "; input >> object.cost; cout << endl;
	cout << "Дозування?(г): "; input >> object.dose; cout << endl;
	return input;
}
Ingredient& Ingredient::operator = (const Ingredient& object) {
	nameofproduct = object.nameofproduct;
	cost = object.cost;
	dose = object.dose;
	return*this;
}
Ingredient Ingredient::operator+(int value)
{
	Ingredient someobj(dose += value);
	return someobj;
}
Ingredient Ingredient::operator-(int value) {
	Ingredient someobj(dose -= value);
	return someobj;
}

void Ingredient::print()
{
	cout << "===Інформація про інгрідієнт===" << endl;
	cout << "Продукт: " << nameofproduct << endl;
	cout << "Ціна(грн): " << cost << endl;
	cout << "Дозування(г): " << dose << endl;
}
