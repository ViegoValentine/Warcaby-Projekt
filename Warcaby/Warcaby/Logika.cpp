#include "Logika.h"

void Logika::mozliwosciRuchu(Pionek pionki[], zmiennaX, zmiennaY, znak)
{
  char doPrzesuniecia;
  char zastepczyX;
  int zastepczyY;
 
  //sprawdzanie mozliwosciu ruchu dla czlowieka
  //biale pionki
  if(znak=="O")
  {
    cout<<"Podaj ktory pionek przesunać";
    cin>>doPrzesuniecia;
    cout<<endl;
    cout<<"Podaj pole mna ktore go przesunac, zmienna X:";
    cin >> zmiannaX;
    cout<<"podaj zmienna Y: ";
    cin>>zmiennaY;
    
    zastepczyX=zmiennaX; //zeby nie dzialac na podawanych zmiennych
    zastepczyY=zmiennaY;
    
    
  }
  
  //czarne pionki
  if (znak=="X")
  {
    cout<<"Podaj ktory pionek przesunać";
    cin>>doPrzesuniecia;
    cout<<endl;
    cout<<"Podaj pole mna ktore go przesunac, zmienna X:";
    cin >> zmiannaX;
    cout<<"podaj zmienna Y: ";
    cin>>zmiennaY;
    
    zastepczyX=zmiennaX; //zeby nie dzialac na podawanych zmiennych
    zastepczyY=zmiennaY;
  }
  
}

