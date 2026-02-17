#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    printf("Enter marks obtained in 5 subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    if(sub1 < 40 || sub2 < 40 || sub3 < 40 || sub4 < 40 || sub5 < 40) {
        printf("Result: Fail\n");
    }
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;
    printf("---------Student Result---------\n");
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if(percentage >= 75){
        printf("Grade: Distinction\n");
    }
    else if(percentage >= 60 && percentage < 75){
        printf("Grade: First Division\n");
    }
    else if(percentage >= 50 && percentage < 60){
        printf("Grade: Second Division\n");
    }
    else if(percentage >= 40 && percentage < 50){
        printf("Grade: Third Divison\n");
    }
    return 0;
}