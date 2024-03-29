#include <cctype>
#include <cstdio>

int sprawdzenie(char *napis1){
    while (*napis1){
        if (islower(*napis1)){
            return 0; //Nie sklada sie z wielkich liter
        }
        ++napis1;
    }
    return 1; //Sklada sie z samych wielkich liter
}

int main(){
    char napis[100];
    printf("Wczytaj napis: ");
    scanf("%[^\n]", napis);

    if (sprawdzenie(napis) == 1){
        printf("Napis sklada sie z samych wielkich liter");
    }   else if (sprawdzenie(napis) == 0) {
        printf("Napis nie sklada sie z samych wielkich liter");
    }   else {
        printf("Nie wiadomo");
    }

    return 0;
}