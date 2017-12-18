#include "stdafx.h"

#include "Kind.h"
#include <string>

Kind::Kind()
{
}

Kind::Kind(string name)
{
	this->name = name;
	this->vermoegen = 0;
}


Kind::~Kind()
{
}
