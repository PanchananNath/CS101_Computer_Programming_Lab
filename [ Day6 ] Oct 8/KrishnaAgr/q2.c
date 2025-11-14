#include <stdio.h>

int checkPrime(int a);

int main()
{
    checkPrime(9);
    return 0;
}

int checkPrime(int a)
{
    int condition = 1;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("Not Prime\n");
            condition = 0;
            break;
        }
    }
    if (condition == 1 && a > 1)
    {
        printf("Prime\n");
    }
    return condition;
}