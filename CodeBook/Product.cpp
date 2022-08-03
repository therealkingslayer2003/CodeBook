#include "Product.h"
Product::Product() {
	nameofproduct = " ";
	cost = 0;
}
Product::Product(double value)
{
	nameofproduct = " ";
	cost = value;
}
Product::Product(string name, double c) :nameofproduct(name), cost(c) {}
ostream& operator<<(ostream& output, const Product& object) {
	output << "===���������� ��� �������===" << endl;
	output << "�������: " << object.nameofproduct << endl;
	output << "ֳ��: " << object.cost << endl;
	return output;
}
istream& operator>>(istream& input, Product& object) {
	cout << "===������ ���������� ��� �������===" << endl;
	cout << "����� ��������?: "; input >> object.nameofproduct; cout << endl;
	cout << "ֳ��?: "; input >> object.cost; cout << endl;
	return input;
}
Product& Product::operator = (const Product& object){
	nameofproduct = object.nameofproduct;
	cost = object.cost;
	return* this;
}
Product Product::operator+(double value)
{
	Product someobj(cost += value);
	return someobj;
}
Product Product::operator-(double value) {
	Product someobj(cost -= value);
	return someobj;
}
void Product::print()
{
	cout << "===���������� ��� �������===" << endl;
	cout << "�������: " << nameofproduct << endl;
	cout << "ֳ��: " << cost << endl;
}
double Product::GetCost() {
	return cost;
}
