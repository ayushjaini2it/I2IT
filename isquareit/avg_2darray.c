#include <stdio.h>

int main(){
    int arr[100][100], rows,coln, sum = 0, avg = 0;
    printf("Enter number of rows in array: ");
    scanf("%d", &rows);

    printf("Enter number of columns in array: ");
    scanf("%d", &coln);

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < coln; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < coln; j++){
            sum += arr[i][j];
        }
    }
    avg = sum / (rows * coln);
    printf("Average of all elements in the array is: %d\n", avg);
    
    return 0;

}