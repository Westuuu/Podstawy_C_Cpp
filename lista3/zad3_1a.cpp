#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    double losowaliczba;
    const int rozmiar = 10;
    double A[rozmiar], B[rozmiar], C[rozmiar];

    for (int i = 0; i < rozmiar; i++){
        cout << "Wpisz liczbe numer " << i + 1 << ": ";
        cin >> A[i];
    }


    for (int i = 0; i < rozmiar; i++){
        losowaliczba = (rand() % 100) - 1;
        B[i] = losowaliczba;
        cout << "Liczba numer " << i + 1 << " w tablicy B:  " << B[i] << endl;
    }

    for (int i = 0; i < rozmiar; i++) {
        C[i] = A[i] * B[i];
        cout << "Liczba " << i + 1 << " w tablicy C to: " << C[i] << endl;
    }

    return 0;
}