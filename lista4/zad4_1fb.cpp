#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void wypelnijTabliceLosowymi(int tablica[], int rozmiar) {
    srand(time(NULL));
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % rozmiar;
    }
}

double obliczSredniaArytmetyczna(int tablica[], int rozmiar) {
    double suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }
    return suma / rozmiar;
}

double obliczMediane(int tablica[], int rozmiar) {
    sort(tablica, tablica + rozmiar);
    if (rozmiar % 2 == 0) {
        return (tablica[rozmiar / 2 - 1] + tablica[rozmiar / 2]) / 2.0;
    } else {
        return tablica[rozmiar / 2];
    }
}

void obliczMode(int tablica[], int rozmiar, int &moda, int &iloscWystapien) {
    moda = -1;
    iloscWystapien = 0;

    int aktualnaLiczba = tablica[0];
    int aktualnaIlosc = 1;

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] == aktualnaLiczba) {
            ++aktualnaIlosc;
        } else {
            if (aktualnaIlosc > iloscWystapien) {
                moda = aktualnaLiczba;
                iloscWystapien = aktualnaIlosc;
            }

            aktualnaLiczba = tablica[i];
            aktualnaIlosc = 1;
        }
    }

    if (aktualnaIlosc > iloscWystapien) {
        moda = aktualnaLiczba;
        iloscWystapien = aktualnaIlosc;
    }
}

int main() {
    const int rozmiar_tablicy = 10;
    int tablica[rozmiar_tablicy];

    wypelnijTabliceLosowymi(tablica, rozmiar_tablicy);

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar_tablicy; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    cout << "Srednia arytmetyczna: " << obliczSredniaArytmetyczna(tablica, rozmiar_tablicy) << endl;
    cout << "Mediana: " << obliczMediane(tablica, rozmiar_tablicy) << endl;

    int moda, iloscWystapien;
    obliczMode(tablica, rozmiar_tablicy, moda, iloscWystapien);
    if (iloscWystapien > 1) {
        cout << "Moda: " << moda << " (wystepuje " << iloscWystapien << " razy)\n";
    } else {
        cout << "Brak mody\n";
    }

    return 0;
}
