#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    for (int j = 0; j <= 10; j++){
        cout << "Wartosc PI z dokladnoscia "<< j <<" miejsc po przecinku to: " << setprecision(j+1) << M_PI << endl;
    }

    return 0;
}
