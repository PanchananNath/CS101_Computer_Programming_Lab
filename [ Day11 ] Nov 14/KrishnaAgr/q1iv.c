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
    snprintf(s1.name, sizeof(s1.name), "Alice");
    s1.roll = 101;
    s1.gpa = 3.75;
    printStudent(&s1);
    return 0;
}