#include <stdio.h>

int main() {
    float basic,hra,da,total;

    printf("Enter Basic Salary:");
    scanf("%f",&basic);

    if (basic<=30000){
        hra = 0.2 * basic;
        da = 0.3 * basic;
    }
    else if(basic>30000 && basic<=60000){
        hra = 0.25 * basic;
        da = 0.35 * basic;
    }
    else{
        hra = 0.3 * basic;
        da = 0.4*basic;
    }

    total = basic + hra + da;

    printf("Total Salary: %.3f",total);

    return 0;
}