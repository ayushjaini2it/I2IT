
#include <stdio.h>

int main(){
    int arr[100], n, key, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Element found at position: %d\n", i+1);
            found = 1;
           break; 
        }
    }
    if (!found){
        printf("Element not found in the array\n");
    }
    return 0;
}