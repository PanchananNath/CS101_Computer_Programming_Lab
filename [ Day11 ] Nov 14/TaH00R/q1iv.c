#include <stdio.h>
#include <stdlib.h>
struct students{
    char name[11];
    int roll;
    double gpa;
};
void printStudent(struct students *s) {
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
    printf("GPA: %.2f\n", s->gpa);
}
int main() {
    struct students s1;    
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    printf("Enter Roll No: ");
    scanf("%d",&s1.roll);
    printf("Enter GPA: ");
    scanf("%f",&s1.gpa);

    printStudent(&s1);
    return 0;
}