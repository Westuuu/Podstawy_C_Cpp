#include <iostream>
#include <windows.h>
using namespace std;

void wyswietlTrojkat (char znak, int a, int kolor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, kolor);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << znak;
        }
        cout << endl;
    }

    SetConsoleTextAttribute(hConsole, 15);
}

int main() {
    int a;
    char znak;
    int kolor;

    cout << "Podaj dlugosc boku trojkata: ";
    cin >> a;

    cout << "Podaj znak ASCII: ";
    cin >> znak;

    cout << "Podaj kolor (0-15): ";
    cin >> kolor;

    wyswietlTrojkat(znak, a, kolor);

    return 0;
}
*/