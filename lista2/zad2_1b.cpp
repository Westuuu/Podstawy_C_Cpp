#include <cstdio>
#include <cmath>

int main() {

    for (int j = 0; j < 11; j++){
        printf("Wartosc PI z dokladnoscia %d miejsc po przecinku to: %2.*f\n", j, j, M_PI);
    }

    return 0;
}
