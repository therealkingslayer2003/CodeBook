#pragma once
#include "ErrorWarning.h"
class RangeWarning :
    public ErrorWarning
{
public:
    RangeWarning(int);
    void printmessage()override;
};

