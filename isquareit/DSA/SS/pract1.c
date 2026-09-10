#include<stdio.h>

void duplicate_remover(double array[], int array_size) {
	double array2[array_size];
	int k = 0;

	for (int i = 0; i < array_size; i++) {
		int is_duplicate = 0;

		for (int j = 0; j < i; j++) {
			if (array[i] == array[j]) {
				is_duplicate = 1;
				break;
			}
		}

		if (!is_duplicate) {
			array2[k] = array[i];
			k++;
		}
	}
	
	printf("Array without duplicates: ");
	for (int i = 0; i < k; i++) {
		printf("%.2f ", array2[i]);
	}
	printf("\n");
}

int main() {
	int n;

	printf("Enter the size of the Array: ");
	scanf("%d", &n);

	double arr[n];

	for (int i = 0; i < n; i++) {
		printf("Enter the value: ");
		scanf("%lf", &arr[i]);
	}
	
	duplicate_remover(arr, n);
}