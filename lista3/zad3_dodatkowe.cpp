#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

// Funkcja do wczytywania macierzy o zadanym rozmiarze
void wczytajMacierz(int wiersze, int kolumny, int macierz[MAX_SIZE][MAX_SIZE]) {
    cout << "Wprowadz wartosci macierzy:" << endl;

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> macierz[i][j];
        }
    }
}

// Funkcja do wyświetlania macierzy o zadanym rozmiarze
void wyswietlMacierz(int wiersze, int kolumny, int macierz[MAX_SIZE][MAX_SIZE]) {
    cout << "Zawartosc macierzy:" << endl;

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Funkcja do sumowania dwóch macierzy
void sumaMacierzy(int wiersze, int kolumny, int macierzA[MAX_SIZE][MAX_SIZE], int macierzB[MAX_SIZE][MAX_SIZE], int wynik[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            wynik[i][j] = macierzA[i][j] + macierzB[i][j];
        }
    }
}

int main() {
    int wiersze, kolumny;

    cout << "Podaj liczbe wierszy macierzy: ";
    cin >> wiersze;

    cout << "Podaj liczbe kolumn macierzy: ";
    cin >> kolumny;

    if (wiersze > MAX_SIZE || kolumny > MAX_SIZE) {
        cout << "Rozmiar macierzy przekracza maksymalny rozmiar (" << MAX_SIZE << "x" << MAX_SIZE << ")." << endl;
        return 1;
    }

    int macierzA[MAX_SIZE][MAX_SIZE], macierzB[MAX_SIZE][MAX_SIZE], wynik[MAX_SIZE][MAX_SIZE];

    wczytajMacierz(wiersze, kolumny, macierzA);
    wczytajMacierz(wiersze, kolumny, macierzB);

    // Sumowanie macierzy
    sumaMacierzy(wiersze, kolumny, macierzA, macierzB, wynik);

    // Wyświetlanie wyniku
    cout << "Suma macierzy" << endl;
    wyswietlMacierz(wiersze, kolumny, wynik);

    return 0;
}
