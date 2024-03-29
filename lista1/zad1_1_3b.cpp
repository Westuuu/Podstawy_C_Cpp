#include <iostream>
using namespace std;

int main() {

    double n, a, b, c;
    double suma, srednia;
    n = 0;

    cout << "Wprowadz a: ";
    cin >> a;
    if (a < 0 || a > 6) {
        cout << "Podana liczba jest ujemna lub wieksza od 6, wprowadz prawidlowa liczbe";
        return 1;
    }
    n = n + 1;

    cout << "Wprowadz b: ";
    cin >> b;
    if (b < 0 || b > 6) {
        cout << "Podana liczba jest ujemna lub wieksza od 6, wprowadz prawidlowa liczbe";
        return 1;
    }
    n = n + 1;

    cout << "Wprowadz c: ";
    cin >> c;
    if (c < 0 || c > 6) {
        cout << "Podana liczba jest ujemna lub wieksza od 6, wprowadz prawidlowa liczbe";
        return 1;
    }
    n = n + 1;

    suma = a + b + c;
    srednia = suma/n;

    if (srednia > 5) {
        cout << "Wysoka srednia: " << srednia << endl;

    }   else {
        cout << "Srednia wynosi: " << srednia << endl;
    }

    cout << "Suma: " << suma;

    return 0;
}