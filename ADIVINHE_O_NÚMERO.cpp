/*  - Jogo "Adivinhe o numero"
    - O programa deve gerar um número randômico de 1 a 100 no início e o usuário tem 6 chances de acertar.
    - Se chutar um valor maior, mostrar: o numero é menor
    - Se chutar um valor menor, mostrar: o numero é maior
    - Se acertou em até 3 vezes: Acertou e é muito sortudo!
    - Se acertou em até 5 vezes: Acertou!
    - Se acertou na última vez: Ufa, foi por pouco!
    - Senão: Game Over! Perdeu!
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
        int N, CC, T;
        T=N=CC=0;
        T = rand() % 100;
        printf("%d\n", T);
    while((T != N) && (CC<6)){
        CC++;
        scanf("%d", &N);
        if(N>T){printf("o numero eh menor\n");} else {if(N<T){printf("o numero eh maior\n");}else{break;}}
    }
         if((N=T) && (CC<=3)){printf("Acertou e eh muito sortudo!\n");}else{
         if((N=T) && (CC<=5)){printf("Acertou!\n");}else{
         if((N=T) && (CC=6)){printf("Ufa, foi por pouco!\n");} else {printf ("Game Over! Perdeu!\n");}}}
    }
