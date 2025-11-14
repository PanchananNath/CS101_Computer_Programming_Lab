#include <stdio.h>
#include <stdlib.h>

void Catenation(char st1[], char st2[]){
char str3[200];
int i= 0,j = 0;
while(st1[i]!='\0') {
    str3[i] = st1[i];
i++;}

while(st2[j]!='\0') {
    str3[i+j] = st2[j];
j++;}
str3[i+j] = '\0';
printf("Concatenated string: %s\n",str3);
}
void Compare(char st1[], char st2[]){
    int i = 0;
    int flag = 1;
    while(st1[i++]!='\0'){
    if((int)st1[i]-(int)st2[i]!=0) {flag = 0; break;}
    }
    if (flag) printf("Both Strings are Same\n");
    else printf("Both Strings are Not Same\n");
}
int Length(char str[]){
    int cnt = 0;
    while(str[++cnt]!='\0');
    return cnt;
}
void Copy(char str1[],char str2[]){
    int i = 0;
    while(str1[i]!='\0'){
            str2[i] = str1[i];
            i++;}
    str2[i] = '\0';
    printf("Copied String 1 into String 2\n String 2 : %s\n",str2);
}
int main() {
    char str1[100], str2[100];
    printf("Enter String 1: ");
    scanf("%s",&str1);
    printf("Enter String 2: ");
    scanf("%s",&str2);

    int choice = 0;
    do{
        if(choice == 0){
    printf("Select the Function\n");
    printf("1: Concatenate\n");
    printf("2: Compare\n");
    printf("3: Length\n");
    printf("4: Copy\n");
    printf("5: Exit\n");
    scanf("%d",&choice);}

    if(choice == 1){
        Catenation(str1,str2);
        choice = 0;
    }
    if(choice == 2){
        Compare(str1,str2);
        choice = 0;
    }
    if(choice == 3){
        printf("Length of String 1 is %d\n", Length(str1));
        printf("Length of String 2 is %d\n", Length(str2));
        choice = 0;
    }
    if(choice == 4){
        Copy(str1,str2);
        choice = 0;
    } 
    }while(choice!=5);

    printf("Program Exited Successfully");
    return 0;
}