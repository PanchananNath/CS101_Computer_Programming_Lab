#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] ="Racecar";
    char copy[50];

    
    //StrCapital
    char capital[50];
    int i = 0;
    while(str[i]!= '\0'){
        int ascii = str[i];
        if(ascii>=97&&ascii<=122){
            ascii-=32;
        }
        capital[i] = ascii;
        i++;
    }
    capital[i] = '\0';


    //Strreverse
    int j=0;
    i = 0;
    while(str[i++]!='\0');
        while(j<i-1){
            copy[j] = capital[i-j-2];
            j++;
    }
    copy[j] = '\0';


    //StrCompare
    i = 0;
    int flag = 1;
    while(capital[i++]!='\0'){
        if((int)capital[i]-(int)copy[i]!=0) {flag = 0; break;}
    }
    if(flag)printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}