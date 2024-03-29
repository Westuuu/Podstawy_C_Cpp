#include <cstdio>

int main(){
    unsigned char a;

    for (a = 32; a < 128; a++) {
        printf("Znak: %c", a);
        printf("   Dziesietna: %d", a);
        printf("   Szesnastkowa: %X", a);
        printf("   Osemkowa: %o\n", a);
    }
    return 0;
}