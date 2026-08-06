#include <stdio.h>
typedef struct student{
    char name[20];
    int age;
    float percentage;
}student;

int sum(int* a, int b){
    *a = 20;
    return a + b;
}

int factorial(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num * factorial(num -1);
    }
}


int main(){
    int a, b;
    char c;
    int arr[14];
    printf("Enter operation to perform: (Sum: s, Factorial: f, Array: a, Structure: c)\n: ");
    scanf("%c", &c);
    if(c == 's'){
        printf("Enter a Number (a): ");
        scanf("%d", &a);
        printf("Enter a Number (b): ");
        scanf("%d", &b);
        printf("Sum: %d\n", sum(&a,b));
    }
    else if(c == 'f'){
        printf("Enter a Number for Factorial: ");
        scanf("%d", &a);
        printf("Factorial: %d\n", factorial(a));
    }
    else if(c == 'a'){
        printf("Enter a Array of 4: ");
        for(int i = 0; i < 4; i++){
            scanf("%d",&arr[i]);
        }
        arr[3] = 10;
        printf("The Array is: ");
        int i = 0;
        while(i < 4){
            printf("%d ", arr[i]);
            i++;
        }
        printf("\n");
    }
    else if(c == 'c'){
        student ash; char name[20];
        printf("Enter the name of the student: ");
        scanf("%s", ash.name);
        printf("Enter the Age of the student: ");
        scanf("%d", &ash.age);
        printf("Enter the Percentage of the student: ");
        scanf("%f", &ash.percentage);
        printf("The Details Entered are: \nName: %s\nAge: %d\nPercentage: %.2f\n", ash.name, ash.age, ash.percentage);

    }
    else{
        printf("Invalid Input\n");
    }


    return 0;
}