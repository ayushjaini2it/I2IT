#include <stdio.h>

int main(){
    int n, total = 0, highest = 0, lowest = 100, absent = 0, highest_frequency_marks = 0;
    float average;
    printf("Enter the Number of Students: ");
    scanf("%d", &n);
    int marks[n];
    while(n--){
        printf("Enter the Marks of Student %d: ", n+1);
        scanf("%d", &marks[n]);
        total += marks[n];
        if(marks[n] > highest){
            highest = marks[n];
        }
        if(marks[n] < lowest){
            lowest = marks[n];
        }
        if(marks[n] == -1){
            absent++;
        }
    }
    average = (float)total / (n - absent);
    for(int i = 0; i < n; i++){
        int frequency = 0;
        for(int j = 0; j < n; j++){
            if(marks[i] == marks[j]){
                frequency++;
            }
        }
        if(frequency > highest_frequency_marks){
            highest_frequency_marks = marks[i];
        }
    }
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Marks with Highest Frequency: %d\n", highest_frequency_marks);

    return 0;
}