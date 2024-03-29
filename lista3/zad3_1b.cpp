#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int rozmiar = 11;
    double d[rozmiar][3];
    double SIL = 1, FIB = 0;
    double a = 0, b = 1;

    for (int i = 0; i < rozmiar; i++) {
        SIL *= (i + 1);
        d[i+1][1] = SIL;
    }

    for (int i = 0; i < rozmiar; i++) {
        d[i][2] = a;
        FIB = a + b;
        a = b;
        b = FIB;
    }

    for (int i = 1; i < rozmiar; i++){
        d[i][0] = i;
    }

    cout << left << setw(2) << "n" << setw(8) << "SIL" << setw(8) << "FIB" << endl;
    for (int i = 1; i < rozmiar; i++){
        cout << left << setw(2) << i;
        for (int j = 1; j < 3; j++){
            cout << right << setw(8) << setprecision(10) << d[i][j];
        }

        cout << endl;
    }

    return 0;
}