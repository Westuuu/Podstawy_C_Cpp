#include <iostream>
using namespace std;

void ZamianaNaMala(char &znak){
    if (znak >= 'A' && znak <= 'Z'){
        znak += 'a' - 'A';
    }
}
void ZamianaNaDuza(char &znak){
    if (znak >= 'a' && znak <= 'z'){
        znak -= 'a' - 'A';
    }
}
//Zamiana wszystkich liter na male
void ZamianaNaWszystkieMale(string &napis){
    for (int i = 0; i < napis.size(); ++i) {
        ZamianaNaMala(napis[i]);
    }
}

//Zamiana pierwszej litery wyrazu na duza
void ZamianaNaPierwszeDuzeWyrazy(string &napis){
    ZamianaNaWszystkieMale(napis);
    for (int i = 0; i < napis.size(); ++i) {
        if (napis[0] >= 'a' && napis[0] <= 'z'){
            ZamianaNaDuza(napis[0]);
        }
        if (napis[i-1] == ' '){
            if ((napis[i] != (napis[i] >= 'A' && napis[i] <= 'Z')) && napis[i] >= 'a' && napis[i] <= 'z'){
                ZamianaNaDuza(napis[i]);
            }
        }
    }
}

//Zamiana pierwszej litery zdania na duza
void ZamianaNaPierwszeDuzeZdan(string &napis){
    ZamianaNaWszystkieMale(napis);
    for (int i = 0; i < napis.size(); ++i){
        if (napis[0] >= 'a' && napis[0] <= 'z'){
            ZamianaNaDuza(napis[0]);
        }
        if ((napis[i-2] == '!' || napis[i-2] == '?' || napis[i-2] == '.') && napis[i-1] == ' '){
            ZamianaNaDuza(napis[i]);
        }
    }
}

int main(){
    string napis;
    cout << "Wprowadz napis: ";
    getline(cin, napis);

    int rozwiazanie = 0;

    cout << "Wybierz co chcesz zrobic: " << endl;
    cout << "1. Rozwiazanie nr 1" << endl;
    cout << "2. Rozwiazanie nr 2 " << endl;

    cin >> rozwiazanie;

    switch (rozwiazanie) {
        case 1:
            ZamianaNaPierwszeDuzeWyrazy(napis);
            cout << napis << endl;
            break;
        case 2:
            ZamianaNaPierwszeDuzeZdan(napis);
            cout << napis << endl;
            break;
        default:
            cout << "Wybierz opcje numer 1 lub 2" << endl;
            break;
    }
    return 0;
}