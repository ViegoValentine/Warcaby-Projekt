#include "Plansza.h"

//Przekazywanie obiektów "pionki"
void Plansza::generowanieTablicy(Pionek pionki[]) {
	int licznik = 1, liczbaPionkow=0;
	//
	for (int i = 0; i < wielkosc; i++) {
		for (int j = 0; j < wielkosc; j++) {
			if (licznik == pionki[liczbaPionkow].licznik) {
				szachownica[i][j] = pionki[liczbaPionkow].symbol;
				liczbaPionkow++;
			}
			else szachownica[i][j] = "#";
			licznik++;
		}
	}
	for (int i = 0; i < wielkosc; i++) {
		for (int j = 0; j < wielkosc; j++) {
			cout << szachownica[i][j];
		}
		cout << endl;
	}
}