#include <iostream>
#include <string>
using namespace std;

const int rozmiar_alfabetu = 26;

int main() {
    string napis;
    cout << "Wczytaj napis: ";
    cin >> napis;

    int wystapienia[rozmiar_alfabetu] = {0};

    for (char znak : napis){
        wystapienia[znak - 'a']++;
    }

    cout << "Wystapienia poszczegolnych znakow:" << endl;
    for (int i = 0; i < rozmiar_alfabetu; i++){
        char znak = 'a' + i;
        if (wystapienia[i] != 0){
            cout << "'" << znak << "': " << wystapienia[i] << endl;
        }
    }
    return 0;
}
