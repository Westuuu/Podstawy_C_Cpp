#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Podaj ilosc wierszy trojkata Pascala: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int liczba = 1;

        for (int k = 0; k < (n - i - 1); k++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << liczba << " ";
            liczba = liczba * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}