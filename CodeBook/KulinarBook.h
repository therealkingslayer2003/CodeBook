#pragma once
#include "Container.h"
#include "Reciepe.h"
class KulinarBook :
    public Container<Reciepe>
{
public:
    KulinarBook();
    KulinarBook(int);
};

