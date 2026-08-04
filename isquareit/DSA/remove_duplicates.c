#include <stdio.h>
#include <stdlib.h>

double* push_back(double* arr, int *size, int *capacity, double a);
void remove_duplicates(double* arr, int size);

int main(){
	int size;
	printf("Enter the size of the array: ");
	if(scanf("%d", &size) != 1 || size <= 0){
		fprintf(stderr, "Invalid size\n");
		return 1;
	}
	double* array = malloc(size * sizeof *array);
	if(array == NULL){
		perror("malloc");
		return 1;
	}
	for(int i = 0; i < size; i++){
		printf("Enter element %d: ", i + 1);
		if(scanf("%lf", &array[i]) != 1){
			fprintf(stderr, "Invalid input\n");
			free(array);
			return 1;
		}
	}
	remove_duplicates(array, size);
	free(array);

	return 0;
}

double* push_back(double* arr, int *size, int *capacity, double a){
	if(*size >= *capacity){
		int new_cap = (*capacity == 0) ? 1 : (*capacity * 2);
		double *tmp = realloc(arr, new_cap * sizeof *tmp);
		if(tmp == NULL){
			return NULL;
		}
		arr = tmp;
		*capacity = new_cap;
	}
	arr[(*size)++] = a;
	return arr;
}

void remove_duplicates(double* arr, int size){
	int new_size = 0;
	int capacity = 0;
	double* temp = NULL;
	for(int i = 0; i < size; i++){
		int is_duplicate = 0;
		for(int j = 0; j < new_size; j++){
			if(arr[i] == temp[j]){
				is_duplicate = 1;
				break;
			}
		}
		if(!is_duplicate){
			double *tmp = push_back(temp, &new_size, &capacity, arr[i]);
			if(tmp == NULL){
				fprintf(stderr, "Memory allocation failed\n");
				free(temp);
				return;
			}
			temp = tmp;
		}
	}
	printf("Array after removing duplicates: ");
	for(int i = 0; i < new_size; i++){
		printf("%lf ", temp[i]);
	}
	printf("\n");
	free(temp);
}