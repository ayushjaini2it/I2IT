// Write a C program to compute following computation on matrix.
// 1. Addition of two matrices.
// 2. Substraction of two matrices.
// 3. Multiplication of two matrices.
// 4. Transpose of a matrix.
// (Use functions, use Switch case)

#include <stdio.h>

void accept(int matrix[][20], int m, int n);

void display(int matrix[20][20], int m, int n);

void add(int matrixA[20][20], int matrixB[20][20], int m1, int n1, int m2, int n2);

void substract(int matrixA[20][20], int matrixB[20][20], int m, int n);

void multiply(int matrixA[20][20], int matrixB[20][20], int m1, int n1, int m2, int n2);

void transpose(int matrix[20][20], int m, int n);


int main(){
	int matrixA[20][20], matrixB[20][20];
	int m1 = 0, n1 = 0, m2 = 0, n2 = 0, choice;
	while(choice != 0){
		printf("Enter the Operation to perform (Enter 0 to end program)\n1: Accept 2 matrices.\n2: Display a matrix.\n3: Addition of matrices\n4: Substraction of matrices.\n5: Multiplication of the matrices.\n6: Transpose of the matrix.\nChoice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:{
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
				break;
			}
			case 2:{
				if(m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0){
					printf("No Matrix found\n");
					break;
				}
				char c;
				printf("Enter the matrix to display(A or B): ");
				scanf(" %c", &c);
				if(c == 'A') {
					printf("Matrix A is:\n");
					display(matrixA, m1, n1);
				}
				else if(c == 'B') {
					printf("Matrix B is:\n");
					display(matrixB, m2, n2);
				}
				else  printf("Invalid Matrix choice.");
				break;
			}
			case 3:{
				if (m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0) {
					printf("No Matrix found\n");
					break;
				}
				printf("Sum of the Matrices is:\n");
				add(matrixA, matrixB, m1, n1, m2, n2);
				break;
			}
			case 4:{
				if (m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0) {
					printf("No Matrix found\n");
					break;
				}
				printf("Substraction of the Matrices is:\n");
				substract(matrixA, matrixB, m1, n1);
				break;
			}
			case 5:{
				if (m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0) {
					printf("No Matrix found\n");
					break;
				}
				printf("Multiplication of the Matrices is:\n");
				multiply(matrixA, matrixB, m1, n1, m2, n2);
				break;
			}
			case 6:{
				if (m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0) {
					printf("No Matrix found\n");
					break;
				}
				printf("Transpose of Matrix A is:\n");
				transpose(matrixA, m1, n1);
				break;
			}
			default:{
				if(choice == 0)
					printf("Ending program...\n");
				else
					printf("Invalid Choice, Try again...\n");
				break;
		}
		}
	}
	return 0;
}	

void display(int matrix[20][20], int m, int n){
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

void add(int matrixA[20][20], int matrixB[20][20], int m1, int n1, int m2, int n2){
	if(m1 != m2 || n1 != n2 || m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0){
		printf("Addition is not possible(Matrices don't have same dimensions)");
		return;
	}
	int matrixC[20][20];
	for(int row = 0; row < m1; row++){
		for(int column = 0; column < n1; column++){
			matrixC[row][column] = matrixA[row][column] + matrixB[row][column];
		}
	}
	display(&matrixC[0][0], m1, n1);
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

void multiply(int matrixA[20][20], int matrixB[20][20], int m1, int n1, int m2, int n2){
	if(n1 != m2 || m1 == 0 || n1 == 0 || m2 == 0 || n2 == 0){
		printf("The Matrices Entered cannot be Multiplied (Columns of A != Rows of B)");
		return;
	}
	int matrixC[20][20];
	for(int row = 0; row < m1; ++row){ 
		for(int column = 0; column < n1; ++column){
			matrixC[row][column] = 0;
			for(int i = 0; i < n1; ++i){
				matrixC[row][column] += matrixA[row][i] * matrixB[i][column];
			}
		}
	}
	printf("The Product of the Matrices is:\n");
	display(&matrixC[0][0], m1, n2);
}

void transpose(int matrix[20][20], int m, int n){
	int matrixT[20][20];
	for(int row = 0; row < m; row++){
		for(int column = 0; column < n; column++){
			matrixT[column][row] = matrix[row][column];
		}
	}
	display(&matrixT[0][0], n, m);
}