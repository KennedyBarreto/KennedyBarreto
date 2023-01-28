#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int main(){
 int arr_1[2][2] = {{1, 2}, {3, 4}};
 int arr_2[2][2] = {{4, 3}, {2, 1}};
 int arr_3[3][3] = {{0, 0}, {0, 0}};
 int i=0,j=0,k=0;
 system("cls");
 	while(i<2){
 		j=0;
 		while(j<2){
 			k=0;
 			while(k<2){
 				arr_3[i][j] += arr_1[i][k] * arr_2[k][j];
 				k++;
 				}
 			j++;
 		}
 	i++;
 	}
 i=0;
 	while(i<2){
 		j=0;
 		while(j<2){
 			printf("%d ", arr_3[i][j]);
 			j++;
 		}
 		printf("\n");
 		i++;
 	}
 getch();
 return 0;
}


