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
	output << "===Інформація про продукт===" << endl;
	output << "Продукт: " << object.nameofproduct << endl;
	output << "Ціна: " << object.cost << endl;
	return output;
}
istream& operator>>(istream& input, Product& object) {
	cout << "===Введіть інформацію про продукт===" << endl;
	cout << "Назва продукту?: "; input >> object.nameofproduct; cout << endl;
	cout << "Ціна?: "; input >> object.cost; cout << endl;
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
	cout << "===Інформація про продукт===" << endl;
	cout << "Продукт: " << nameofproduct << endl;
	cout << "Ціна: " << cost << endl;
}
double Product::GetCost() {
	return cost;
}
