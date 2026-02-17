#include <stdio.h>
int smallestDivisor(int num){
    if(num <= 1){
        return num;
    }
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            return i;
        }
    }
}

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

}