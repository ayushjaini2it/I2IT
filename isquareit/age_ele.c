#include <stdio.h>

void eleg(int a);

int main(){

    int a;
    printf("Enter your age:\n");
    scanf("%d", &a);
    eleg(a);
    return 0;
}

void eleg(int a){
    if( a >= 18 && a<100){
        printf("You are Eligible\n");
    }
    else if(a > 100){
        printf("You are immortal\n");
    }
    else{
        printf("You are NOT Elegible\n");
    }
};