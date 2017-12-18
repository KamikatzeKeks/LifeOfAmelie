#pragma once
#include <string>

using namespace std;

#include <string>
class Mensch
{
public:
	Mensch();
	string getName(); // Returnt einen Zeiger auf den Namen
	Mensch(string); // Konstruktor, der den Namen als String mitbringt
	virtual ~Mensch(); // Destruktor
	void setVermoegen(double vermoegen);
	double getVermoegen(void);
protected:
	double vermoegen;
	string name; // Der Name (Vor- und Zu*name eines Menschen), hier als string
};

