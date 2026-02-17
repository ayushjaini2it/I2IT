//Name: Ayush Jain, Roll no: FCB44
// Title: Cube of a Number

#include <stdio.h>
#include <math.h>

int cube(int a);

int main(){

    int a, result;
    printf("Enter a number:");
    scanf("%d", &a);

    result = cube(a);
    printf("Cube of %d is: %d", a, result);
    printf("\nName: Ayush Jain\nRoll no: FCB44");
    return 0;
}
int cube(int a){
    int b;
    b = a*a*a;
    return b;
}