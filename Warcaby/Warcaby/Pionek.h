#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pionek
{
public:
	int licznik;
	bool czyDama;
	char symbol;
	int zycie;
	char koordynatX; 
	int koordynatY;
	void danePionka(char znak, int miejsce);
};

