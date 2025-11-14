#include <stdio.h>
#include <stdlib.h>

int DigitinWords(int num){   
char digit[10][20] = {"Zero", "One", "Two", "Three", "Four", "Five"
,"Six","Seven","Eight","Nine"};

if (num > 0){
    DigitinWords(num / 10);
    printf("%s ",digit[num%10]);
}
}

int main() {
    int n;
    printf("Enter Value of n:");
    scanf("%d",&n);
    DigitinWords(n);
    return 0;
}