#include "RangeWarning.h"
RangeWarning::RangeWarning(int value) :ErrorWarning(value) {}
void RangeWarning::printmessage() {
	cout << "Елементу за даним індексом не існує - " << index << endl;
}