#include "RangeWarning.h"
RangeWarning::RangeWarning(int value) :ErrorWarning(value) {}
void RangeWarning::printmessage() {
	cout << "�������� �� ����� �������� �� ���� - " << index << endl;
}