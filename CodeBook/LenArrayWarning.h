#pragma once
#include "ErrorWarning.h"
class LenArrayWarning :
    public ErrorWarning
{
public:
    LenArrayWarning(int);
    void printmessage()override;
};

