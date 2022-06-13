/*  - Fazer um programa que leia números enquanto não for digitado um valor negativo, e mostre:
    - números lidos
    - total de pares
    - total de impares
    - total de zeros
    - media
    - maior valor
    - menor valor
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
        int N, Nt, Na, Na2, Cl, Cz, Cp, Ci, Maior, Menor;
        double M;
        Na2=N=Na=M=Cl=Cz=Cp=Ci=Maior=Menor=0;
    do
    {
        Na = N;
        scanf("%d", &N);
        if (N<0){break;} else {
        Nt = N;
        Cl++;
            if(Nt==0){Cz++; Cp++;} else {
                if(Nt%2==0){Cp++;}else{
                Ci++;
            }}}
        if(Nt>Na){Maior=Nt;}else{Menor=Nt;}
        M = (Na2=Na2+Nt)/Cl;

    } while (N >= 0);
    printf("numeros lidos: %d\n", Cl);
    printf("total de pares: %d\n", Cp);
    printf("total de impares: %d\n", Ci);
    printf("total de zeros: %d\n", Cz);
    printf("media: %.2lf\n", M);
    printf("maior valor: %d\n", Maior);
    printf("menor valor: %d\n", Menor);
    return 0;
}
