#include <iostream>
using namespace std;

void sortowaniebabelkowe(double tablica[], int rozmiar){
    for (int i = 0; i < rozmiar - 1; i++){
        for (int j = 0; j < rozmiar - 1 - i; j++){
            if (tablica[j] > tablica[j +1]){
                swap(tablica[j], tablica[j+1]);
            }
        }
    }
}

int znajdzpozycje(double tablica[], int poczatek, int koniec, double szukanyElement){
    if (poczatek <= koniec){
        int srodek = poczatek + (koniec - poczatek) / 2;

        if (tablica[srodek] == szukanyElement){
            return srodek;
        }   else if (tablica[srodek] < szukanyElement){
            return znajdzpozycje(tablica, srodek + 1, koniec, szukanyElement);
        }   else {
            return znajdzpozycje(tablica, poczatek, srodek - 1, szukanyElement);
        }
    }
    return -1;
}

int main(){
    int N;
    double szukanyElement;
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;

    double tablica[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        tablica[i] = rand() % N;
    }

    sortowaniebabelkowe(tablica, N);

    for (int i = 0; i < N; i++){
        cout << i + 1 << ". element tablicy to: " << tablica[i] << endl;
    }

    cout << "Podaj element ktory chcesz wyszukac: ";
    cin >> szukanyElement;

    int pozycja = znajdzpozycje(tablica, 0, N-1, szukanyElement);

    if (pozycja != -1){
        cout << "Pierwsze wystapienie elementu " << szukanyElement << " znajduje sie na pozycji: " << pozycja + 1;
    } else {
        cout << "Element: " << szukanyElement << " nie wystepuje w tablicy" << endl;
    }
    return 0;
}