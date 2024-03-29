#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int rozmiar_tablicy = 10;
int tablica[rozmiar_tablicy];

void wypelnijTabliceLosowymi() {
    srand(time(NULL));
    for (int i = 0; i < rozmiar_tablicy; i++) {
        tablica[i] = rand() % rozmiar_tablicy;
    }
}

double obliczSredniaArytmetyczna() {
    double suma = 0;
    for (int i = 0; i < rozmiar_tablicy; i++) {
        suma += tablica[i];
    }
    return suma / rozmiar_tablicy;
}

double obliczMediane() {
    sort(tablica, tablica + rozmiar_tablicy);
    if (rozmiar_tablicy % 2 == 0) {
        return (tablica[rozmiar_tablicy / 2 - 1] + tablica[rozmiar_tablicy / 2]) / 2.0;
    } else {
        return tablica[rozmiar_tablicy / 2];
    }
}

void obliczMode(int &moda, int &iloscWystapien) {
    moda = -1;
    iloscWystapien = 0;

    int aktualnaLiczba = tablica[0];
    int aktualnaIlosc = 1;

    for (int i = 1; i < rozmiar_tablicy; i++) {
        if (tablica[i] == aktualnaLiczba) {
            aktualnaIlosc++;
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
    wypelnijTabliceLosowymi();

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar_tablicy; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    cout << "Srednia arytmetyczna: " << obliczSredniaArytmetyczna() << endl;
    cout << "Mediana: " << obliczMediane() << endl;

    int moda, iloscWystapien;
    obliczMode(moda, iloscWystapien);
    if (iloscWystapien > 1) {
        cout << "Moda: " << moda << " (wystepuje " << iloscWystapien << " razy)\n";
    } else {
        cout << "Brak mody.\n";
    }

    return 0;
}
