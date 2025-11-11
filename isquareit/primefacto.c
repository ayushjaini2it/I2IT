//Name: Ayush Jain, Roll no: FCB44
// Title: Prime Factorization of a Number

#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    printf("Prime Factors of %d are: ", a);
    for(int i =2; i <= sqrt(a); i++){
        while(a % i == 0){
            printf("%d x ", i);
            a = a / i;
        }
    }
    if(a > 1){
        printf("%d", a);
    }
    printf("\nName: Ayush Jain\nRoll no: FCB44");
    return 0;
}