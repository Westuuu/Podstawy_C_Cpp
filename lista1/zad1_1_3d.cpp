#include <iostream>
using namespace std;

int main() {
    int a;
    char znak;

    cout << "Podaj dlugosc boku trojkata: ";
    cin >> a;

    cout << "Podaj znak ASCII: ";
    cin >> znak;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << znak;
        }
        cout << endl;
    }

    return 0;
}
