
#include "stdafx.h"

#include <iostream>
#include "Frau.h"
#include "Mensch.h"

using namespace std;

int main()
{
	Frau frau;
	Mann max("Max");


	for (int year = 1900; year <= 1999; year++) {
		cout << year << endl;
		frau.zeige();
		switch (year)
		{
		case 1900: {
			frau.setName("Amelie K");

			break;
		}

		case 1925:
		{
			Mann *menschPointer = &max;
			frau.heirat(menschPointer);

			break;
		}

		case 1927: {
			Kind *alfons = new Kind("Alfons");
			frau.gebaeren(alfons);
			break;
		}
		case 1929: {
			Kind *mathilde = new Kind("Mathilde");
			frau.gebaeren(mathilde);
			double vermoegenAmelie = frau.getVermoegen();
			double brotPreis = 100000;
			frau.setVermoegen(vermoegenAmelie - brotPreis);

			break;
		}
		case 1935: {
			Kind *sieglinde = new Kind("Sieglinde");
			Kind *renate = new Kind("Renate");
			frau.gebaeren(sieglinde);
			frau.gebaeren(renate);
			break;
		}
		case 1951:
		{
			frau.stirbtKind(1);
			double vermoegenAmelie = frau.getVermoegen();
			double erbe = 6000;
			frau.setVermoegen(vermoegenAmelie + erbe);
			break;
		}
		case 1952:
			frau.stirbtEhemann();
			break;
		case 1972: {
			double vermoegenAmelie = frau.getVermoegen();
			double lotterieGewinn = 12300000;
			frau.setVermoegen(vermoegenAmelie + lotterieGewinn);
			cout << frau.getVermoegen() << endl;
			break;
		}
		default:
		{break; }
		}


		if (year >= 1951 && year < 1972) {
			double einkaufsBetrag = 1000;
			frau.einkauf(einkaufsBetrag);
		}
		else if (year >= 1972) {
			double einkaufsbetrag = 10000;
			frau.einkauf(einkaufsbetrag);
		}




		for (int j = 0; j<10000; j++) for (int k = 0; k < 10000; k++);
	}



	system("pause");
	return 0;
}

