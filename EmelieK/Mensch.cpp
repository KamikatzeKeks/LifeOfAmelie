
#include "stdafx.h"
#include "Mensch.h"
#include <iostream>

using namespace std;




Mensch::Mensch()
{

}

string Mensch::getName()
{

	return name;
}

Mensch::Mensch(string name)
{
	this->name = name;
	this->vermoegen = 0;
}

Mensch::~Mensch()
{
}

void Mensch::setVermoegen(double vermoegen)
{
	this->vermoegen = vermoegen;
}

double Mensch::getVermoegen(void)
{
	return this->vermoegen;
}
