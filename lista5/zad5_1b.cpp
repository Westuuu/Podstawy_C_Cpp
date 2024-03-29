#include <iostream>
using namespace std;

void liczenie(char* napis1, int& liczba_liter, int& liczba_cyfr, int& liczba_specjalnych){
    for (; *napis1; ++napis1) {
        if ((*napis1 >= 'a' && *napis1 <= 'z') || (*napis1 >= 'A' && *napis1 <= 'Z')){
            ++liczba_liter;
        } else if (*napis1 >= '0' && *napis1 <= '9'){
            ++liczba_cyfr;
        } else {
            ++liczba_specjalnych;
        }
    }
}

int main(){
    char napis[100];
    cout << "Wprowadz napis: ";
    cin.getline(napis, 100);

    int liczba_liter = 0;
    int liczba_cyfr = 0;
    int liczba_specjalnych = 0;

    liczenie(napis, liczba_liter, liczba_cyfr, liczba_specjalnych);
    cout << "Liczba liter: " << liczba_liter << endl;
    cout << "Liczba cyfr: " << liczba_cyfr << endl;
    cout << "Liczba pozostalych znakow: " << liczba_specjalnych << endl;
    return 0;
}