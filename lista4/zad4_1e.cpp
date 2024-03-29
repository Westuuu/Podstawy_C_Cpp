#include <iostream>
using namespace std;

int dodawanie(int a, int b){
    return a + b;
}
int mnozenie(int a, int b){
    return a * b;
}

void wyswietltabliczkedodawania(){
    cout << "Tabliczka dodawania: " << endl;
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 11; j++){
            cout << dodawanie(i, j) << "\t";
        }
        cout << endl;
    }
}
void wyswietltabliczkemnozenia(){
    cout << "Tabliczka mnozenia: " << endl;
    for (int i = 1; i < 11; i++){
        for (int j = 1; j < 11; j++){
            cout << mnozenie(i, j) << "\t";
        }
        cout << endl;
    }
}

int main(){
    wyswietltabliczkedodawania();
    wyswietltabliczkemnozenia();
    return 0;
}