#include "Pionek.h"

void Pionek::danePionka(char znak, int miejsce)
{
	//przypisanie poszczeglonych wartosci dla pojedynczego pionka
	zycie = 1;
	czyDama = 0;
	symbol = znak;
	licznik = miejsce;
	//koordynatX od A do H
	//koordynatY od 1 do 8
	koordynatX = 'A' + (miejsce - 1) % 8;
	koordynatY = (miejsce - 1) / 8 + 1;
}
