#include <iostream>
#include "Pionek.h"
#include "Plansza.h"
#include "Logika.h"
#include "Gracz.h"

int main()
{
	//chujchuj
	char znak;
	int miejsce = 1, wybor = 1;
	//przypisanie wartosci wszystkim z 24 pionków.
	Pionek pionki[24];
	for (int i = 0; i < 24; i++) {
		//pionki białe
		if (i < 12) {
			if (i == 4) {
				miejsce = 10;
			}
			else if (i == 8) {
				miejsce = 17;
			}
			znak = 'O';
			pionki[i].danePionka(znak, miejsce);
			miejsce = miejsce + 2;
		}
		//pionki czarne
		else if (i > 11) {
			if (i == 12) {
				miejsce = 42;
			}
			else if (i == 16) {
				miejsce = 49;
			}
			else if (i == 20) {
				miejsce = 58;
			}
			znak = 'X';
			pionki[i].danePionka(znak, miejsce);
			miejsce = miejsce + 2;
		}
	}

	//wypisanie wartosci przypisanych jednemu pionkowi.
	/*for (int i = 0; i < 24; i++) {
		cout << "id pionka: " << i+1 << endl;
		cout << "miejsce pionka w tablicy: " << pionki[i].licznik << endl;
		cout << "koordynaty pionka na szachownicy: " << pionki[i].koordynatX << pionki[i].koordynatY << endl;
		cout << "zycie pionka: " << pionki[i].zycie << endl;
		cout << "czy pionek to dama: " << pionki[i].czyDama<<endl;
		cout << "znak pionka: " << pionki[i].symbol << endl;
		cout << "--------------------" << endl;
	}*/
	Plansza generowaniePlanszy;
	generowaniePlanszy.generowanieTablicy(pionki);

	//wybor czy ai czy 2 graczy, liczby w nawiasach oznaczaja czy gracz jest Ai
	cout << "Wybierz:" << endl;
	cout << "1 - gracz kontra gracz" << endl;
	cout << "2 - gracz kontra komputer (opcja beta)" << endl;
	cin >> wybor;
	if (wybor == 1) {
		Gracz gracz1;
		Gracz gracz2;
		gracz1.wyborGraczy(1, 0, 'X');
		gracz2.wyborGraczy(2, 0, 'O');
	}
	else if (wybor == 2) {
		Gracz graczCzlowiek;
		Gracz graczAi;
		graczCzlowiek.wyborGraczy(1, 0, 'X');
		graczAi.wyborGraczy(2, 1, 'O');
	}
}
