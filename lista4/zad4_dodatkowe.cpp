#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

struct Wyniki{
    string nazwa;
    double wartosc;
};

void sortowanie(int tablica[], int rozmiar){
    for (int i = 0; i < rozmiar - 1; ++i) {
        for (int j = 0; j < rozmiar - i - 1; ++j) {
            if (tablica[j] > tablica[j + 1]) {
                swap(tablica[j],tablica[j+1]);
            }
        }
    }
}

// Funkcja do obliczania sredniej arytmetycznej
double sredniaArytmetyczna(const int liczby[], int rozmiar) {
    double suma = 0.0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += liczby[i];
    }
    return suma / rozmiar;
}

// Funkcja do obliczania sredniej geometrycznej
double sredniaGeometryczna(const int liczby[], int rozmiar) {
    double iloczyn = 1.0;
    for (int i = 0; i < rozmiar; ++i) {
        iloczyn *= liczby[i];
    }
    return pow(iloczyn, 1.0 / rozmiar);
}

// Funkcja do obliczania sredniej harmonicznej
double sredniaHarmoniczna(const int liczby[], int rozmiar) {
    double suma = 0.0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += 1.0 / liczby[i];
    }
    return rozmiar / suma;
}

// Funkcja do obliczania sredniej kwadratowej
double sredniaKwadratowa(const int liczby[], int rozmiar) {
    double sumaKwadratow = 0.0;
    for (int i = 0; i < rozmiar; ++i) {
        sumaKwadratow += liczby[i] * liczby[i];
    }
    return sqrt(sumaKwadratow / rozmiar);
}

// Funkcja do obliczania mediany
double medianaTablicy(const int liczby[], int rozmiar) {
    int* kopieLiczby = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        kopieLiczby[i] = liczby[i];
    }
    sortowanie(kopieLiczby, rozmiar);

    if (rozmiar % 2 == 0) {
        // Jesli liczba elementów jest parzysta oblicz srednia dwoch srodkowych elementow
        int srodek1 = rozmiar / 2 - 1;
        int srodek2 = rozmiar / 2;
        double mediana = (kopieLiczby[srodek1] + kopieLiczby[srodek2]) / 2.0;
        delete[] kopieLiczby;
        return mediana;
    } else {
        // Jesli liczba elementow jest nieparzysta zwraca srodkowy element
        int srodek = rozmiar / 2;
        double mediana = kopieLiczby[srodek];
        delete[] kopieLiczby;
        return mediana;
    }
}
// Funkcja do obliczania sredniej modalnej
int dominanta(const int liczby[], int rozmiar, int& rozmiarWyniku) {
    int* kopieLiczby = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        kopieLiczby[i] = liczby[i];
    }

    sortowanie(kopieLiczby, rozmiar);

    int maksCzestosc = 0;
    int aktualnaCzestosc = 1;
    int aktualnaLiczba = kopieLiczby[0];

    for (int i = 1; i < rozmiar; ++i) {
        if (kopieLiczby[i] == kopieLiczby[i - 1]) {
            ++aktualnaCzestosc;
        } else {
            aktualnaCzestosc = 1;
        }

        if (aktualnaCzestosc > maksCzestosc) {
            maksCzestosc = aktualnaCzestosc;
            aktualnaLiczba = kopieLiczby[i];
        }
    }

    // Znalezienie wszystkich liczby o najwiekszej czestotliwosci pojawien
    int* wynik = new int[rozmiar];
    int licznik = 0;

    for (int i = 0; i < rozmiar; ++i) {
        if (kopieLiczby[i] == aktualnaLiczba) {
            wynik[licznik++] = kopieLiczby[i];
        }
    }

    // Ustawienie rozmiaru wyniku
    rozmiarWyniku = licznik;

    delete[] kopieLiczby;
    int *wsk;
    wsk = &wynik[0];
    return *wsk;
}
void sortujTablice(Wyniki tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; ++i) {
        for (int j = 0; j < rozmiar - i - 1; ++j) {
            if (tablica[j].wartosc > tablica[j + 1].wartosc) {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }
}

bool porownajElementy(const Wyniki &a, const Wyniki &b) {
    return a.wartosc < b.wartosc;
}
int main() {
    srand(time(NULL));

    const int rozmiar = 20;
    int liczby[rozmiar] = {};
    for (int i = 0; i < rozmiar; ++i) {
        liczby[i] = rand() % 10;
    }

    for (int i = 0; i < rozmiar; ++i) {
        cout << liczby[i] << " ";
    }
    cout << endl;
    Wyniki tablicaWynikow[6];
    double sredniaA = sredniaArytmetyczna(liczby, rozmiar);
    double sredniaG = sredniaGeometryczna(liczby, rozmiar);
    double sredniaH = sredniaHarmoniczna(liczby, rozmiar);
    double sredniaK = sredniaKwadratowa(liczby, rozmiar);
    double mediana = medianaTablicy(liczby, rozmiar);
    tablicaWynikow[0].wartosc = sredniaA;
    tablicaWynikow[0].nazwa = "Srednia arytmetyczna";

    tablicaWynikow[1].wartosc = sredniaG;
    tablicaWynikow[1].nazwa = "Srednia geometryczna";

    tablicaWynikow[2].wartosc = sredniaH;
    tablicaWynikow[2].nazwa = "Srednia harmoniczna";

    tablicaWynikow[3].wartosc = sredniaK;
    tablicaWynikow[3].nazwa = "Srednia kwadratowa";

    tablicaWynikow[4].wartosc = mediana;
    tablicaWynikow[4].nazwa = "Mediana";
    int rozmiarwyniku;
    int a = dominanta(liczby, rozmiar, rozmiarwyniku);
    tablicaWynikow[5].wartosc = a;
    tablicaWynikow[5].nazwa = "Dominanta";

    sortujTablice(tablicaWynikow, 6);

    for (int i = 0; i < 6; ++i) {
        cout << tablicaWynikow[i].nazwa << ": " << tablicaWynikow[i].wartosc << endl;
    }

    return 0;
}
