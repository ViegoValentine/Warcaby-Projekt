#pragma once
#include <iostream>
#include "Pionek.h"

using namespace std;

class Plansza:public Pionek
{
private:
	int wielkosc = 8;
	string szachownica[8][8];
public:
	void generowanieTablicy(Pionek pionki[]);
};

