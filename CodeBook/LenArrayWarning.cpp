#include "LenArrayWarning.h"
LenArrayWarning::LenArrayWarning(int size) :ErrorWarning(size) {}
void LenArrayWarning::printmessage() {
	cout << "Масив більше ніж на 10 елементів створювати заборонено" << endl;
}