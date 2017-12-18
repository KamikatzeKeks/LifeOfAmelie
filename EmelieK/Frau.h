#pragma once
#include "Mensch.h"
#include <vector>
#include "Mann.h"
#include "Kind.h"
using namespace std;
class Frau : public Mensch {
public:
	Frau();
	Frau(string); // Konstruktor, der den Namen des Menschen als String mitbringt
	virtual ~Frau(); // Destruktor
	void gebaeren(Kind* kind); // Erzeugung (= Geburt) des n-ten Kindes mit Namen
	void heirat(Mann *mann); // Heirat mit dem Mann mit dem mitgegebenen Namen
	void stirbtKind(int); // Tot des n-ten Kindes (n als int-Parameter)
	void stirbtEhemann(void); // Tot des Ehemanns
	void zeige(void); // Zeigt Ehemann und Kinder (soweit existieren) auf dem Bildschirm
	string getName(void);
	void setName(string name);
	void einkauf(double einkaufsbetrag);
protected:
	Mann* ehemann; // Zeiger auf den Ehemann; 0, falls nicht vorhanden
	vector<Kind*> kinder; // Array von Zeigern auf die Kinder; 0, falls nicht vorhanden
};
