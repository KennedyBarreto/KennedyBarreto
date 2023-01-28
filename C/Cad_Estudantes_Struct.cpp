#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno {
 char nome[100];
 int idade;
 float media;
 char nivel[30];
} Estudante;

void ler_estudante(Estudante lista[], int a);
void impr_estudante(Estudante lista[], int a);

int main(){
 int a;
 printf("Quantidade de estudantes a cadastrar: ");
 	scanf("%d", &a);
 	fflush(stdin);
 Estudante lista[a];
 ler_estudante(lista, a);
 impr_estudante(lista, a);
 getchar();
}

void ler_estudante(Estudante lista[], int a){
 printf("\nInsira os dados do(s) estudante(s)\n");
 	for(int i=0; i<a; i++){
 		printf("\nNome: ");
 			scanf("%[^\n]s", &lista[i].nome);
 			fflush(stdin);
 		printf("\nIdade: ");
 			scanf("%d", &lista[i].idade);
 			fflush(stdin);
 		printf("\nMedia: ");
 			scanf("%f", &lista[i].media);
 			fflush(stdin);
 		printf("\nNivel: ");
 			scanf("%[^\n]s", &lista[i].nivel);
 			fflush(stdin);
 		}
}

void impr_estudante(Estudante lista[], int a){
 printf("\nDados do(s) Estudante(s)\n");
 	for(int i=0; i<a; i++)
 			printf("\nNome: %s, Idade: %d, Media = %.2f, Nivel: %s",
			lista[i].nome, lista[i].idade, lista[i].media, lista[i].nivel);
}

