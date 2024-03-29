#include <iostream>
using namespace std;

void sortowaniebabelkowe(double tablica[], int rozmiar){
    for (int i = 0; i < rozmiar - 1; i++){
        for (int j = 0; j < rozmiar - 1 - i; j++){
            if (tablica[j] > tablica[j + 1]){
                swap(tablica[j], tablica[j+1]);
            }
        }
    }
}

int main(){
    int N;
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;

    double tablica[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        tablica[i] = rand() % N;
    }

    sortowaniebabelkowe(tablica, N);

    cout << "Posortowane liczby: " << endl;
    for (int i=0; i<N; i++){
        cout << i+1 << ". " << tablica[i] << endl;
    }
    return 0;
}