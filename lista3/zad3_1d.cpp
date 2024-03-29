#include <iostream>
using namespace std;

double szereg(double a, int n){
    if (n == 0){
        return 1.0;
    }   else if (n > 0) {
            return a * szereg(a, n-1);
    }   else {
        return 1;
    }
}

int main(){
    double a;
    int n;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj naturalna potege n: ";
    cin >> n;

    if (n < 0) {
        cout << "Podaj liczbe naturalna n!" << endl;
        return 1;
    }

    double tablica[n];

    for (int i = 0; i < n; i++){
        tablica[i] = szereg(a, i+1);
    }
    for (int i = 0; i < n; i++){
        cout << "a" << i+1 << ": " << tablica[i] << endl;
    }
    return 0;
}