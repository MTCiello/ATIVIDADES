/* - Fazer um programa que mostre a tabuada de todos os números de 1 a 10 */

*/

#include <stdio.h>

int main(){
        int T=0;
    for(int A=1;A<10;A++){
        T=0;
        for(int B=1;B<=10;B++){
            T=T+A;
            printf("%d ", T);
        }
        printf("\n");
    }
    return 0;
}
