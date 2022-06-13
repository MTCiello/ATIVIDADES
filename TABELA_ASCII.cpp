/*1 - Fazer um programa que liste a tabela ASCII completa (imprimíveis) em formato
char, int e hexadecimal.

- não imprimíveis - 0 a 31
- imprimíveis ASCII normal - 32 a 126
- 127 - é o delete
- imprimíveis ASCII extendida - 128 até 255

*/

#include <stdio.h>
#include <string.h>

int main(){
    printf("Caracteres da tabela ASCII:");
    printf("\n Simbolo \t Decimal \t Hexadecimal ");
    for(int i=32; i<=126; i++){
        printf("\n   %c \t\t %d \t\t %x ", i,i,i);
    }

    printf("\n\nCaracteres adicionais da tabela ASCII Extendida:");
    printf("\n Simbolo \t Decimal \t Hexadecimal ");
    for(int i=128; i<=255; i++){
        printf("\n   %c \t\t %d \t\t %x ", i,i,i);
    }
}
