#include <iostream>
using namespace std;

int main(){

    double a, b, s;

    cout << "Wczytaj zmienna a: ";
    cin >> a;
    cout << "Wczytaj zmienna b: ";
    cin >> b;

    if (a > b) {
        cout << "Pierwsza liczba jest wieksza od drugiej\n";
    }   else if (a == b) {
        cout << "Podane liczby sa rowne\n";
    }   else {
        cout << "Druga liczba jest wieksza od pierwszej\n";
    }

    s = a + b;
    cout << "Suma wprowadzonych liczb wynosi: " << s;

    return 0;
}