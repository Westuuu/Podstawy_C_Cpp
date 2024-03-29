#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <double> dane;
    double liczba;

    for (int i = 0; i < 10; i++) {
        cout << "Wprowadz liczbe numer " << i+1 << ": ";
        cin >> liczba;
        dane.push_back(liczba);
    }

    double suma;

    for (int i = 0; i < dane.size(); i++) {
        suma += dane[i];
    }

    double srednia;
    srednia = suma / dane.size();

    double max = dane[0];
    double min = dane[0];

    for (int i = 1; i < dane.size(); i++) {
        if (dane[i] > max) {
            max = dane[i];
        }
        if (dane[i] < min) {
            min = dane[i];
        }
    }

    cout << "\nSuma liczb wynosi: " << suma << endl;
    cout << "Srednia liczb wynosi: " << srednia << endl;
    cout << "Najwieksza liczba to: " << max << endl;
    cout << "Najmniejsza liczba to: " << min << endl;

    return 0;
}