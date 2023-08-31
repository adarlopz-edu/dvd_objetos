#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <string>
#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

class Pelota {
    private: //atributos
        string caracter;

    public:
        Pelota(string); //constructor
        void mover();
        void rebotar();

};


Pelota::Pelota(string _caracter) {
    caracter = _caracter;
}

//FINISH PERO TENGO QUE ARREGLAR LAS VARIABLES GLOBALES

int x = 1, y = 1, k = 1, l = 1;

void Pelota::mover() {
    //do {
        system("cls");
        gotoxy(x, y);
        cout << caracter;
        x = x + k;
        y = y + l;
        Sleep(50);
   // } while (1 == 1);
}

void Pelota::rebotar() {
    if (x == 80 || x == 1) { k = -k; }
    if (y == 1 || y == 25) { l = -l; }
}


int main() {


    Pelota pelota = Pelota("DVD");
    do {
    pelota.mover();
    pelota.rebotar();
    } while (1 == 1);

}