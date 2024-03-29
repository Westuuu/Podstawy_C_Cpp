#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "***************************************************\n";

    char op;
    double a, b, c, r, p, n, y, w, v, k;
    bool kontynuuj;

    do {
        cout << "\nZ jakiego wzoru chcialbys skorzystac? (a-f): ";
        cin >> op;

        switch(op){
            case 'a':
                cout << "Podaj promien (r): ";
                cin >> r;

                p = M_PI * pow(r, 2);
                cout << "\nPole (p) jest rowne: " << p << endl;
                break;
            case 'b':
                cout << "Podaj promien (r): ";
                cin >> r;

                v = 4.0/3 * M_PI * pow(r, 3);
                cout << "\nObjetosc wynosi: " << v << endl;
                break;
            case 'c':
                cout << "Podaj ramie a: ";
                cin >> a;
                cout << "Podaj ramie b: ";
                cin >> b;

                c = sqrt(pow(a, 2) + pow(b, 2));
                cout << "\nPrzeciwprostokatna (c) ma dlugosc rowna: " << c << endl;
                break;
            case 'd':
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> b;
                cout << "Podaj kat (w stopniach) y: ";
                cin >> y;

                c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(y/180*M_PI));
                cout << "\nc wynosi: " << c << endl;
                break;
            case 'e':
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj p: ";
                cin >> p;
                cout << "Podaj n: ";
                cin >> n;

                k = a * pow((1 + p/100), n);
                cout << "\nk jest rowne: " << k << endl;
                break;
            case 'f':
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> b;
                cout << "Podaj c: ";
                cin >> c;

                w = (a * b / (b + c)) + (a * c / (b + c));
                cout << "\nw wynosi: " << w << endl;
                break;
            default:
                cout << "\nProsze wybrac odpowiedni wzor (a-f)" << endl;
                break;
        }

        cout << "\nCzy chcesz kontynuowac obliczenia? (T/N): ";
        char wybor;
        cin >> wybor;
        kontynuuj = (wybor == 'T' || wybor == 't');

    } while (kontynuuj);

    cout << endl << "***************************************************";

    return 0;
}
