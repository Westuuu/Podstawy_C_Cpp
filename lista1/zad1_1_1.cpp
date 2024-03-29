//standardowy sposob wyswietlenia napisu uzywajac funkcji printf

#include <stdio.h>
int main(){
    printf("Hello World");
    return 0;
}
//*/


//standardowy program, ktory uzywa biblioteki <iostream> i funkcji std:cout do wyswietlenia napisu
/*
#include <iostream>
int main (){
    std::cout << "Hello World";
    return(0);
}
*/


//podobna wersja do poprzedniego programu, jednak z zadeklarowana przestrzenia nazw, co pozwala pominac deklarowanie przestrzeni "std::" przed kolejnymi funkcjami
/*
#include <iostream>
using namespace std;
int main (){
    cout << "Hello World";
    return(0);
}
*/


//program uzywa biblioteki <stdlib.h>, ktora pozwala na wykonanie polecenia systemowego, ktore w tym przypadku wyswietla napis
/*
#include <stdlib.h>
int main (){
    system("echo Hello World");
    return(0);
}
*/


//program uzywa tablicy znakow "cmd" do skopiowania napisow i przekazuje ja do funkcji "system", ktora wyswietla ja na ekranie
/*
#include <stdlib.h>
#include <string.h>
int main (){
    char cmd[50];
    strcpy(cmd, "echo Hello World");
    system(cmd);
    return(0);
}
*/


//program ten wykorzystuje tablice oraz petle do wyswietlenia kolejnych liter
//funkcja printf wypisuje kolejne znaki korzystajac z wielkosci tablicy a oraz kolejnych elementow zadeklarowanej w niej
/*
#include <stdio.h>

int main(){
    char a[100]={4,1,8,8,11,-68,19,11,14,8,0,0};
    for(;a[12]<a[4];a[12]++)
    {
    printf("%c",sizeof(a)+a[a[12]]);
    }
    return 0;
}
*/

