#include <stdio.h>

int main(){
    int arr[100], n, i, min, max;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}