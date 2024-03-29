#include <iostream>
using namespace std;

int znajdzpozycje(const int tablica[], int rozmiar, int szukany_element){
    for (int i=0; i<rozmiar; i++){
        if (tablica[i] == szukany_element){
            return i;
        }
    }
    return -1;
}

int main() {
    const int rozmiar_tablicy = 10;
    int tablica[rozmiar_tablicy];
    int szukanaliczba;

    srand(time(NULL));
    for (int i = 0; i < rozmiar_tablicy; i++) {
        tablica[i] = rand() % rozmiar_tablicy;
    }

    for (int i = 0; i < rozmiar_tablicy; i++){
        cout << i + 1 << " element tablicy, to: " << tablica[i] << endl;
    }

    cout << "Wpisz liczbe z zakresu (0-" << rozmiar_tablicy - 1 << "): ";
    cin >> szukanaliczba;

    int pozycja = znajdzpozycje(tablica, rozmiar_tablicy, szukanaliczba);

    if (pozycja != -1) {
    cout << "Wpisana liczba znajduje sie na pozycji: " << pozycja+1;
    } else {
        cout << "Nie znaleziono wpisanego elementu: " << szukanaliczba;
    }

    return 0;
}