#include <stdio.h>

int main(){
    int arr[50][50], rows, col, i, key, freq = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter elements of the array:\n");
    for(i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                freq++;
            }
        }
    }

    printf("Frequency of %d is %d\n", key, freq);

    return 0;
}