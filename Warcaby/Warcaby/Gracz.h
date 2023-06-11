#pragma once
#include<iostream>
#include<string>
#include"Pionek.h"

using namespace std;

class Gracz :public Pionek
{
private:
	int ktoryGracz;
	bool czyAi;
	char znak;
public:
	void wyborGraczy(int ktoryGracz, bool czyAi, char znak);
};

