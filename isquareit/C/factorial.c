//Name: Ayush Jain, Roll no: FCB44
// Title: Factorial of a Number

#include <stdio.h>
#include <math.h>
int fact(int n){
    if(n ==1){
        return 1;
    }
    int fac =n*fact(n-1);
    return fac;

}
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("%d\n",fact(a));
    printf("Name: Ayush Jain\nRoll no: FCB44");
    return 0;
}