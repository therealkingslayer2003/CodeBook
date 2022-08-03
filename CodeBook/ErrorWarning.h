#pragma once
#include "Header.h"
class ErrorWarning
{
protected:
	int index;
public:
	ErrorWarning(int);
	virtual void printmessage() = 0;
};

