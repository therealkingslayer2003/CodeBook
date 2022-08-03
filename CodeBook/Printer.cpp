#include "Printer.h"

void Printer::ToPrint(Product* base)
{
	cout << "“ип об'Їкту: " << typeid(*base).name() << endl;
	base->print();
}
