#include <iostream>
#include <vector>
using namespace std;

int main() {
    double n;
    double suma = 0;
    double wartosc;
    vector <double> szereg;

    cout << "Podaj wartosc n: ";
    cin >> n;

    for (int k = 1; k <= n; k++) {
        wartosc = 1.0 / (3 * k + 1);
        szereg.push_back(wartosc);
    }

    for (int i = 0; i < szereg.size(); i++) {
        suma += szereg[i];
    }

    cout << "Suma szeregu dla n rownego: " << n << " wynosi: " << suma;

    return 0;
}