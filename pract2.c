// Write a C program to compute following computation on matrix.
// 1. Addition of two matrices.
// 2. Substraction of two matrices.
// 3. Multiplication of two matrices.
// 4. Transpose of a matrix.
// (Use functions, use Switch case)

#include <stdio.h>

void accept(int matrix[][20], int m, int n);

void display(int matrix[][20], int m, int n);

void add(int matrixA[20][20], int matrixB[20][20], int m, int n);

void substract(int matrixA[20][20], int matrixB[20][20], int m, int n);

void multiply(int matrixA[20][20], int matrixB[20][20], int m, int n);


int main(){
	int matrixA[20][20], matrixB[20][20];
	int m1, n1, m2, n2;
	printf("Enter the matrix A size:\n");
	printf("Row size: ");
	scanf("%d", &m1);
	printf("Column size: ");
	scanf("%d", &n1);
	accept(matrixA, m1, n1);
	printf("Enter the matrix B size:\n");
	printf("Row size: ");
	scanf("%d", &m2);
	printf("Column size: ");
	scanf("%d", &n2);
	accept(matrixB, m2, n2);
	display(matrixA, m1, n1);
	display(matrixA, m1, n1);
	add(matrixA, matrixB, m1, n1);
	substract(matrixA, matrixB, m1, n1);
	return 0;
}

void display(int matrix[][20], int m, int n){
	printf("The entered matrix is:\n");
	for(int row = 0; row < m; row++){
		for(int column = 0; column < n; column++){
			printf("%d ", matrix[row][column]);
		}
		printf("\n");
	}
}

void accept(int matrix[20][20], int m, int n){
	printf("Enter the matrix (Row wise):\n");
	for(int row = 0; row < m; row++){
		for(int column = 0; column < n; column++){
			scanf("%d", &matrix[row][column]);
		}
	}
}

void add(int matrixA[20][20], int matrixB[20][20], int m, int n){
	int matrixC[20][20];
	for(int row = 0; row < m; row++){
		for(int column = 0; column < n; column++){
			matrixC[row][column] = matrixA[row][column] + matrixB[row][column];
		}
	}
	display(matrixC, m, n);
}

void substract(int matrixA[20][20], int matrixB[20][20], int m , int n){
	int matrixC[20][20];
	for(int row = 0; row < m; row++){
		for(int column = 0; column < n; column++){
			matrixC[row][column] = matrixA[row][column] - matrixB[row][column];
		}
	}
	display(matrixC, m, n);
}

void multiply(int matrixA[20][20], int matrixB[20][20], int m, int n){
	int matrixC[20][20];
	for(int row = 0; row < m; row++){ 
		int r = 0; c = 0;
		for(int column = 0; column < n; column++){
			matrixC[r][c] += matrixA[row][column] * matrixB[column][row];
		}
		c++;
	}
	display(matrixC, m, n);


}
