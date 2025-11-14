#include <stdio.h>

int main() {
    int month;
    printf("Enter Month Number: ");
    scanf("%d",&month);

    switch(month){
        case 1:
        printf("The Month is January, 31 Days");
        break;

        case 2:
        printf("The Month is February, 28/29 Days");
        break;

        case 3:
        printf("The Month is March, 31 Days");
        break;

        case 4:
        printf("The Month is April, 30 Days");
        break;

        case 5:
        printf("The Month is May, 31 Days");
        break;

        case 6:
        printf("The Month is June,30 Days");
        break;

        case 7:
        printf("The Month is July,31 Days");
        break;

        case 8:
        printf("The Month is August, 31 Days");
        break;

        case 9:
        printf("The Month is September, 30 Days");
        break;

        case 10:
        printf("The Month is October, 31 Days");
        break;

        case 11:
        printf("The Month is November, 30 Days");
        break;

        case 12:
        printf("The Month is December, 31 Days");
        break;

        default:
        printf("Month Does Not Exist");
    }
    return 0;
}