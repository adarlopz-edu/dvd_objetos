#include<windows.h>
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
        int x;
        int y;
        int k;
        int l;

    public:
        Pelota(string, int, int, int, int); //constructor
        void mover();
        void rebotar();

};

Pelota::Pelota(string _caracter, int  _x, int _y, int _k, int _l) {
    caracter = _caracter;
    x = _x;
    y = _y;
    k = _k;
    l = _l;
}

void Pelota::mover() {
    system("cls");
    gotoxy(x, y);
    cout << caracter;
    x = x + k;
    y = y + l;
    Sleep(50);
}

void Pelota::rebotar() {
    if (x == 80 || x == 1) { k = -k; }
    if (y == 1 || y == 25) { l = -l; }
}


int main() {
    Pelota pelota = Pelota("DVD", 1, 1, 1, 1);
    do {
        pelota.mover();
        pelota.rebotar();
    } while (1 == 1);
}
