#include "LenArrayWarning.h"
LenArrayWarning::LenArrayWarning(int size) :ErrorWarning(size) {}
void LenArrayWarning::printmessage() {
	cout << "����� ����� �� �� 10 �������� ���������� ����������" << endl;
}