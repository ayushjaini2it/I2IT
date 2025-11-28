// Name: Ayush Jain, Roll no: FCB44
// Title: Gross Salary Calculation

#include <stdio.h>

int main(){
    float basic, hra, da, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    hra = 0.20 * basic;
    da = 1.5 * basic;
    gross = basic + hra + da;
    printf("Gross Salary is: %.2f\n", gross);
    printf("Name: Ayush Jain\nRoll no: FCB44");
    return 0;
}