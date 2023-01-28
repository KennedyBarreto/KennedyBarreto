#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler_estudante(int a, char nome[][200], int idade[], float media[], char
nivel[][50]);
void impr_estudante(int a, char nome[][200], int idade[], float media[], char
nivel[][50]);

int main(){
 int a;
 printf("Quantidade de estudantes a cadastrar:");
 	scanf("%d", &a);
 	fflush(stdin);
 char nome[a][200];
 int idade[a];
 float media[a];
 char nivel[a][50];
 ler_estudante(a, nome, idade, media, nivel);
 impr_estudante(a, nome, idade, media, nivel);
 getchar();
}
void ler_estudante(int a, char nome[][200], int idade[], float media[], char
nivel[][50]){
 printf("\nInsira os dados do(s) estudante(s)\n");
 	for(int i=0; i<a; i++){
 		printf("\nNome:");
 			scanf("%[^\n]s", nome[i]);
 			fflush(stdin);
 		printf("\nIdade: ");
 			scanf("%d", &idade[i]);
 			fflush(stdin);
 		printf("\nMedia: ");
 			scanf("%f", &media[i]);
 			fflush(stdin);
 		printf("\nNivel:");
 			scanf("%[^\n]s", nivel[i]);
 			fflush(stdin);
 }
}
void impr_estudante(int a, char nome[][200], int idade[], float media[], char
nivel[][50]){
 printf("\n Dados do(s) Estudante(s)\n");
 	for(int i=0; i<a; i++)
 		printf("\nNome: %s, Idade: %d, Media = %.2f, Nivel: %s", nome[i],
idade[i], media[i], nivel[i]);
}

