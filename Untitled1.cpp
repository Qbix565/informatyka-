#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void setColor(int color) {
  SetConsoleTextAttribute(hConsole, color);
}
int main() {
  int predkosc1, predkosc2, predkosc3, wynik1, wynik2, wynik3;
  string marka1, marka2, marka3;
  cout << "Limit to 280kmh" << endl;
  cout << "Podaj marke pierwszego auta: ";
  cin >> marka1;
  cout << "Podaj jego predkosc: ";
  cin >> predkosc1;
  cout << "Podaj marke drugiego auta: ";
  cin >> marka2;
  cout << "Podaj jego predkosc: ";
  cin >> predkosc2;
  cout << "Podaj marke trzeciego auta: ";
  cin >> marka3;
  cout << "Podaj jego predkosc: ";
  cin >> predkosc3;
  
  wynik1 = predkosc1 * 1000/3600;
  wynik2 = predkosc2 * 1000/3600;
  wynik3 = predkosc3 * 1000/3600;
  
  Sleep(400);
  cout << "Predkosc " << marka1 << " to " << wynik1 << " m/s" << endl;
  Sleep(400);
  cout << "Predkosc " << marka2 << " to " << wynik2 << " m/s" << endl;
  Sleep(400);
  cout << "Predkosc " << marka3 << " to " << wynik3 << " m/s" << endl;
  Sleep(400);
  
  setColor(2);
  cout <<"*" << endl;
  cout <<"*" << endl;
  cout <<"*" << endl;
  cout <<"********************************************************************************" << endl;
  cout <<"         1         2         3         4         5         6         7         8     (predkosc w m/s (bez zer)";
  
  setColor(3);
  gotoxy(wynik1,11 );
  Sleep(1000);
  cout << "*" << marka1;
  setColor(6);
  gotoxy(wynik2,12 );
  Sleep(1000);
  cout << "*" << marka2;
  setColor(4);
  gotoxy(wynik3,13 );
  Sleep(1000);
  cout << "*" << marka3;
  system("pause >nul");
}

