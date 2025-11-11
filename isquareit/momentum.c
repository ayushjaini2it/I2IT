//Name: Ayush Jain, Roll no: FCB44
// Title: Momentum Calculation

#include <stdio.h>

int main(){
    float m, v, p;
    printf("Enter mass in kg: ");
    scanf("%f", &m);
    printf("Enter Velocity in m/sec: ");
    scanf("%f", &v);
    p = m*v;
    printf("The momentum is %.2f kg m/sec\n", p);
    printf("Name: Ayush Jain\nRoll no: FCB44");
    return 0;
}