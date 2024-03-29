#include <iostream>
#include <cstdlib>
using namespace std;

const int rozmiar = 10;

void wprowadzliczbe(double A[rozmiar]){
    for (int i = 0; i < rozmiar; i++){
        cout << "Wpisz liczbe numer " << i + 1 << ": ";
        cin >> A[i];
    }
}

void losowanie(double B[rozmiar]) {
    for (int i = 0; i < rozmiar; i++) {
        double losowaliczba;
        losowaliczba = (rand() % 100) - 1;
        B[i] = losowaliczba;
        cout << "Liczba numer " << i + 1 << " w tablicy B:  " << B[i] << endl;
    }
}

void obliczanie(const double A[rozmiar], const double B[rozmiar], double C[rozmiar]){
    for (int i = 0; i < rozmiar; i++) {
        C[i] = A[i] * B[i];
        cout << "Liczba numer " << i + 1 << " w tablicy C to: " << C[i] << endl;
    }
}

int main() {
    double A[rozmiar];
    double B[rozmiar];
    double C[rozmiar];

    wprowadzliczbe(A);
    losowanie(B);
    obliczanie(A, B, C);

    return 0;
}