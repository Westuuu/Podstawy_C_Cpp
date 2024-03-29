#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c, p, q, x0, x1, x2;
    double delta;

    cout << "Wprowadz a: ";
    cin >> a;
    cout << "Wprowadz b: ";
    cin >> b;
    cout << "Wprowadz c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;
    p = (-b) / (2 * a);
    q = (-delta) / (4 * a);


    cout << "Wspolrzedne wierzcholka wynosza: " << "(" << p << ", " << q << ")" << endl;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Miejsca zerowe funkcji: " << "(x1 = " << x1 << ", x2= " << x2 << ")" << endl;
    }   else if (delta == 0) {
        x0 = (-b) / (2 * a);
        cout << "Miejsce zerowe funkcji: " << x0 << endl;
    }   else {
        cout << "Brak miejsc zerowych" << endl;
    }

    cout << "Wspolrzedne przeciecia z osia OY wynosza: " << "(0, " << c << ")" << endl;

    return 0;
}
