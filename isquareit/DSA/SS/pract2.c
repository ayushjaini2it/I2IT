#include <stdio.h>

void input(float arr[], int *n){
    printf("\x1b[2J\x1b[HEnter the number of students: ");
    scanf("%d", n);
    if (*n < 1 || *n > 100) {
        printf("Number of students must be between 1 and 100.\n");
        *n = 0;
        return;
    }
    printf("Enter the percentage of students: ");
    for(int i = 0; i < *n; i++){
        scanf("%f", &arr[i]);
    }
}

void display(float arr[], int n){
    printf("\x1b[3;1H\x1b[1mThe percentage of students top 5 students are: \x1b[48;5;30m");
    for(int i = 0; i < 5 && i < n; i++){
        printf("%.2f ", arr[i]);
    }
    printf("\x1b[0m\n");
}

void bubbleSort(float* arr, int n) {
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(float* arr, int n) {
        for(int i = 0; i < n - 1; i++){
            int j = i, index = i;
            while(j < n){
                if(arr[index] > arr[j]){
                    index = j;
                }
                j++;
            }
            float temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
}

void insertionSort(float* arr, int n) {
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            float temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

int main(){
    float percentage[100];
    int n;
    input(percentage, &n);
    if (n == 0) {
        return 1;
    }
    while(1){
        int choice;
        printf("\x1b[4;1H\x1b[0J");
        printf("\n");
        printf("Enter the sorting algorithm to be used:\n1: Bubble Sort\n2: Selection Sort\n3: Insertion Sort\n-1: Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                bubbleSort(percentage, n);
                display(percentage, n);
                break;
            case 2:
                selectionSort(percentage, n);
                display(percentage, n);
                break;
            case 3:
                insertionSort(percentage, n);
                display(percentage, n);
                break;
            case 4:
                display(percentage, n);
                break;
            case -1:
                printf("Exiting the program....\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}