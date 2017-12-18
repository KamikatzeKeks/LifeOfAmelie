#include "stdafx.h"

#include "Frau.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;




Frau::Frau()
{
}

Frau::Frau(string name)
{
	this->name = name;
}

Frau::~Frau()
{
}

void Frau::gebaeren(Kind* kind)
{
	kinder.push_back(kind);
}

void Frau::heirat(Mann *menschPointer)
{
	this->ehemann = menschPointer;
	Mann max = *menschPointer;
	cout << name << " hat " << max.getName() << " geheiratet." << endl;
	this->vermoegen += 100000;

}

void Frau::stirbtKind(int index)
{
	kinder.erase(kinder.begin() + 1);
}

void Frau::stirbtEhemann(void)
{
	this->ehemann = NULL;
}

void Frau::zeige(void)
{
	cout << "Ehemann: " << endl;
	if (ehemann != NULL) {
		cout << ehemann->getName() << endl;

	}
	cout << "Kinder: " << endl;

	for each(Kind* kind in kinder) {
		cout << kind->getName() << endl;
	}

	cout.setf(ios::fixed); cout.precision(2);
	cout << "Vermögen: " << vermoegen << endl;

}

string Frau::getName(void)
{
	return name;
}

void Frau::setName(string name)
{
	this->name = name;
}

void Frau::einkauf(double einkaufsbetrag)
{
	double zinssatz = 1.08;

	this->vermoegen = vermoegen - einkaufsbetrag;
	if (vermoegen < 0) {
		vermoegen = vermoegen * zinssatz;
	}

}
