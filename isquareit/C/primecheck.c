//Name: Ayush Jain, Roll no: FCB44
// Title: Prime Number Check

#include <stdio.h>

int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    for(int i =2; i < a; i++){
        if(a % i == 0){
            printf("%d is not a Prime Number\n", a);
            return 0;
        }
    }
    printf("%d is a Prime Number", a);
    printf("\nName: Ayush Jain\nRoll no: FCB44");
    return 0;
}