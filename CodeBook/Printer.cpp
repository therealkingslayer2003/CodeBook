#include "Printer.h"

void Printer::ToPrint(Product* base)
{
	cout << "��� ��'����: " << typeid(*base).name() << endl;
	base->print();
}
