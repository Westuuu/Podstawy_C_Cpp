#include <iostream>
using namespace std;

void SzyfrowanieLiter(string &napis){
    for (int i = 0; i < napis.size(); ++i) {
        if (napis[i] >= 'a' && napis[i] <= 'z' - 1 || napis[i] >= 'A' && napis[i] <= 'Z' - 1){
            napis[i] += 1;
        } else if (napis[i] == 'z'){
            napis[i] += 'A' - 'z';
        } else if (napis[i] == 'Z'){
            napis[i] -= 'Z' - 'a';
        }
    }
}

int main(){
    string napis;
    cout << "Wprowadz napis: ";
    getline(cin, napis);

    SzyfrowanieLiter(napis);
    cout << "Zaszyfrowany napis to: " << endl << napis << endl;
    return 0;
}