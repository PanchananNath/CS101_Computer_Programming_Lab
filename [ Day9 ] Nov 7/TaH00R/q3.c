#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    char string[] = "Iiit guwahati";
    char capital[50];
    int i = 0;
    while(string[i]!= '\0'){
        int ascii = string[i];
        if(ascii>=97&&ascii<=122){
            ascii-=32;
        }
        capital[i] = ascii;
        printf("%c",capital[i]);
        i++;
    }
    return 0;
}