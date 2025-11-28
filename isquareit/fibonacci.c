    //Name: Ayush Jain, Roll no: FCB44
    // Title: Fibonacci Series
    
    #include <stdio.h>

    int main(){
        int n, a = 0, b = 1, next;
        printf("Enter number of terms: ");
        scanf("%d", &n);

        if(n <1){
            printf("Invalid Input");
            return 0;
        }else{
            printf("The Fibonacci Series upto %d terms is: %d %d", n, a, b);
            for(int i = 2; i < n; i++){
                next = a + b;
                a = b;
                b = next;
                printf(" %d", next);
            }
        }
        printf("\nName: Ayush Jain\nRoll no: FCB44");

    }