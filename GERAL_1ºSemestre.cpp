#include <stdio.h>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;

// ATIVIDADES
  void MEDIA();
  void DOLAR();
  void MAIOR_DE_IDADE();
  void PARIMPAR();
  void AREALOSANGO();

//ESCOLHA CASO
  int ESCOLHA;

int main() { 
system("clear");
	//do {
printf("Qual atividade deseja rodar ? \n[01] - Calculo de media\n[02] - Dolar para real\n[03] - Teste maior idade\n[04] - Teste de par ou impar \n[05] - Area de um losango \n");
  scanf("%d", &ESCOLHA);
    switch (ESCOLHA){
      case 1: system("cls"); MEDIA(); break;
      case 2: system("cls"); DOLAR(); break;
      case 3: system("cls"); MAIOR_DE_IDADE(); break;
      case 4: system("cls"); PARIMPAR(); break;
      case 5: system("cls"); AREALOSANGO(); break;
      default: printf("Opção invalida"); break;
					}
		printf("\nPrecione ENTER se deseja voltar ao inicio. \n");
		//getch();}
	}
  
// ATIVIDADE: Algoritmo para calcular a média feita por um veículo, dados o consumo em litros e a quantidade de quilômetros rodados.
void MEDIA() {
  float A, B, M;
  printf("Digite o km e os litros para ter a media \n");
  scanf("%f %f", &A, &B);
  M = A / B;
  printf("\n%.2f km/L de media", M);
}

// ATIVIDADE: Algoritmo para converter uma quantia em dólares em reais, dados o valor em dólares e a cotação.
void DOLAR() {
  float D, Dr, C;
	printf("Digite o valor em dolares: \n");
  scanf("%f", &D);
	printf("Digite o valor da cotacao atual: \n");
	scanf("%f", &Dr);
  C = D * Dr;
  printf("\nNa cotacao atual %.2f dolares valem %.2f reais", D, C);
}

//ATIVIDADE: Escrever um algoritmo que, dada uma idade, diga se a pessoa é maior de idade ou não.
void MAIOR_DE_IDADE () {
  int I;
    printf("Digite sua idade: \n");
    scanf("%d", &I);
      if (I>=18){
        printf("Voce eh maior de idade, parabens!");}
        else {
        printf("Voce deve esperar mais alguns anos.");} 
}

//ATIVIDADE: Escrever um algoritmo que dado um número inteiro, diga se o mesmo é par ou ímpar.
void PARIMPAR () {
  int N;
    printf("Digite um numero para o teste: \n");
      scanf("%d", &N);
        if (N%2==0){
          printf("Este numero eh par");
        } else {
          printf("Este numero eh impar");
        }
}

//ATIVIDADE: Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2;
void AREALOSANGO (){
