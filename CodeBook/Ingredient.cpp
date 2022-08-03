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
	output << "===���������� ��� ����䳺��===" << endl;
	output << "�������: " << object.nameofproduct << endl;
	output << "ֳ��(���): " << object.cost << endl;
	output << "���������(�): " << object.dose << endl;
	return output;
}
istream& operator>>(istream& input, Ingredient& object) {
	cout << "===������ ���������� ��� ����䳺��===" << endl;
	cout << "����� ��������?: "; input >> object.nameofproduct; cout << endl;
	cout << "ֳ��?(���): "; input >> object.cost; cout << endl;
	cout << "���������?(�): "; input >> object.dose; cout << endl;
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
	cout << "===���������� ��� ����䳺��===" << endl;
	cout << "�������: " << nameofproduct << endl;
	cout << "ֳ��(���): " << cost << endl;
	cout << "���������(�): " << dose << endl;
}
