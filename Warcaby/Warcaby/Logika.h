#pragma once
#include <iostream>
#include <string>
#include "Pionek.h"

using namespace std;

class Logika: public Pionek
{
public:
  char zmiennaX;
  int zmiennaY;
  char znak;
  
  
  bool CzyWolne; //sprawdza czy dane pole jest wolne i czy jest mozliwosc wykonania ruchu
  void mozliwosciRuchu(Pionek pionki[], zmiennaX, zmiennaY, znak); //sprawdza czy podany ruch jest mozliwy 
  void ruchPionka(Pionek pionki[], zmiennaX, zmiennaY);   //rusza pionkiem kiedy mozliwy jest ruch
};
