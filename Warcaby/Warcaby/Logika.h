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
  bool CzyWolne;
  
  void ruchPionka(Pionek pionki[]);
};
