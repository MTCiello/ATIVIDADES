#include <stdio.h>
#include <stdlib.h>

#define TAM 3
#define LIMPA system("cls");

char BASE[TAM][TAM];

void INICIO();
void USUARIO();
void COMEMORA();
void VELHA();

int TESTE_LINHA(){

         if (BASE[0][0]=='X' && BASE[0][1]=='X' && BASE[0][2]=='X') {return 1;}
    else if (BASE[0][0]=='O' && BASE[0][1]=='O' && BASE[0][2]=='O') {return 2;}
    else if (BASE[1][0]=='X' && BASE[1][1]=='X' && BASE[1][2]=='X') {return 1;}
    else if (BASE[1][0]=='O' && BASE[1][1]=='O' && BASE[1][2]=='O') {return 2;}
    else if (BASE[2][0]=='X' && BASE[2][1]=='X' && BASE[2][2]=='X') {return 1;}
    else if (BASE[2][0]=='O' && BASE[2][1]=='O' && BASE[2][2]=='O') {return 2;} 
    else return 0;

}

int TESTE_COLUNA(){

         if (BASE[0][0]=='X' && BASE[1][0]=='X' && BASE[2][0]=='X') {return 1;} 
    else if (BASE[0][0]=='O' && BASE[1][0]=='O' && BASE[2][0]=='O') {return 2;} 
    else if (BASE[0][1]=='X' && BASE[1][1]=='X' && BASE[2][1]=='X') {return 1;} 
    else if (BASE[0][1]=='O' && BASE[1][1]=='O' && BASE[2][1]=='O') {return 2;} 
    else if (BASE[0][2]=='X' && BASE[1][2]=='X' && BASE[2][2]=='X') {return 1;}
    else if (BASE[0][2]=='O' && BASE[1][2]=='O' && BASE[2][2]=='O') {return 2;} 
    else return 0;
    
}

int TESTE_D1(){

     if (BASE[0][0] == 'X' && BASE[1][1] == 'X' && BASE[2][2] == 'X') {return 1;} 
else if (BASE[0][0] == 'O' && BASE[1][1] == 'O' && BASE[2][2] == 'O') {return 2;} 
else return 0;
}

int TESTE_D2(){

     if (BASE[0][2] == 'X' && BASE[1][1] == 'X' && BASE[2][0] == 'X') {return 1;}
else if (BASE[0][2] == 'O' && BASE[1][1] == 'O' && BASE[2][0] == 'O') {return 2;}
else {return 0;}


}

int VENCEDOR(){
    int G=0, R=0;

if(TESTE_COLUNA()==1 || TESTE_LINHA()==1 || TESTE_D1()==1 || TESTE_D2()==1) 
{ G = 1; } else if (TESTE_COLUNA()==2 || TESTE_LINHA()==2 || TESTE_D1()==2 || TESTE_D2()==2) 
{ G = 2; }

if(G!=0){
LIMPA;
USUARIO();
    printf("%c", 201);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 187);

    printf("%c     JOGADOR %d GANHOU !!!     %c\n", 186, G, 186);
    
    printf("%c", 200);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 188);
    printf("Deseja Jogar novamente ?\n[ 1 ] - Sim\n[ 2 ] - Nao\n");
    scanf("%d", &R);



    if (R==1){
        return 1;    
    } else {
        return 2;
    }
}
}


int main (){

    int J1L, J1C, J2L, J2C, T=0, AUX;

while(VENCEDOR()<=1 && T!=9){

    LIMPA;
    INICIO();
    
    while(TESTE_COLUNA()==0 && TESTE_LINHA()==0 && TESTE_D1()==0 && TESTE_D2()==0){
        

    USUARIO();
    printf("JOGADOR 1:\n");
    AUX = 1;
    while(AUX>0){
        scanf("%d %d", &J1L, &J1C);
        if(BASE[J1L-1][J1C-1] == ' '){
            BASE[J1L-1][J1C-1] = 'X';
            T++;
            LIMPA; 
            AUX = 0;   
        } else {
            LIMPA;
            USUARIO();
            printf("Casa invalida, tente outra!\n");
        }  

    }

    if(TESTE_COLUNA()!=0 || TESTE_LINHA()!=0 || TESTE_D1()!=0 || TESTE_D2()!=0 || T==9) {break;}
    

    USUARIO();
    printf("JOGADOR 2:\n");
    AUX = 1;
    while(AUX>0){
        scanf("%d %d", &J2L, &J2C);
        if(BASE[J2L-1][J2C-1] == ' '){
            BASE[J2L-1][J2C-1] = 'O';
            LIMPA;
            AUX = 0;
            T++;
        } else {
            LIMPA;
            USUARIO();
            printf("Casa invalida, tente outra!\n");
        }

    }

    }
    }
        if(T==9){USUARIO(); VELHA();} else {COMEMORA();}
        
    system("pause");
    
}


void USUARIO(){
        int L, C;
    printf("\t JOGO DA VELHA\n\t");
    for(int i=0;i<15;i++){
        printf("%c", 205);
    }
    printf("\n\n\t   1   2   3\n");
    for(L = 0; L < TAM; L++) {
        printf("\t%d ", L+1);
        for(C = 0; C < TAM; C++) {
            if(C < 2)
                printf(" %c %c", BASE[L][C], 179);
            else
                printf(" %c ", BASE[L][C]);
        }
        if(L < 2)
            printf("\n\t  %c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,197,196,196,196,197,196,196,196);
    }
    printf("\n\n"); 
}

void INICIO(){
    for(int L = 0; L<TAM; L++){
    for(int C = 0; C<TAM; C++){
        BASE[L][C] = ' ';
        }
    }
}

void COMEMORA (){

    printf("%c", 201);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 187);

    printf("%c      OBRIGADO POR JOGAR      %c\n", 186, 186);

    printf("%c            %c   %c             %c\n", 186, 254, 254, 186);
    printf("%c            %c%c%c%c%c             %c\n", 186, 196, 196, 196, 196, 217, 186);
    
    printf("%c", 200);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 188);
}

void VELHA(){

    printf("%c", 201);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 187);

    printf("%c            VELHA             %c\n", 186, 186);
    
    printf("%c", 200);
    for(int i=0;i<30;i++) printf("%c",205);
    printf("%c\n", 188); 
}
