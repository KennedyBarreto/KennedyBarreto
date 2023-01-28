#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bits/stdc++.h>


void MultMatriz() {
 int aMatriz[3][2] = {{1, 4}, {2, 5}, {3, 6}};
 int bMatriz[2][3] = {{7, 8, 9}, {10, 11, 12}};
 int product[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
 	for (int row = 0; row < 3; row++) {
 		for (int col = 0; col < 3; col++) {
 			for (int inner = 0; inner < 2; inner++) {
 					product[row][col] += aMatriz[row][inner] *
					bMatriz[inner][col];
 					}
 				std::cout << product[row][col] << " ";
 				}
 			std::cout << "\n";
 		}
}

int main() {
 MultMatriz();
 getchar();
}

