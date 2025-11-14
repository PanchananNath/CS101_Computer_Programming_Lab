#include <stdio.h>

int main() {
    char a;
    printf("Enter Value:");
    scanf("%c",&a);

    if(a > 'a' && (int)a <='z'
    && a != 'a'&& a != 'e'&& a != 'i'&& a != 'o'&& a != 'u'
    || a == 'A' || a == 'E'|| a == 'I'|| a == 'O'|| a == 'U'){
        printf("Category 1");
    }
    else if(a > 'A' && (int)a <='Z'
    && a != 'A'&& a != 'E'&& a != 'I'&& a != 'O'&& a != 'U'
    || a == 'a' || a == 'e'|| a == 'i'|| a == 'o'|| a == 'u'){
        printf("Category 2");
    }
    return 0;
}