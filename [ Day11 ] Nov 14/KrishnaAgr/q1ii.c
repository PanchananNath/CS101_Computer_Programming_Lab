#include <stdio.h>
#include <stdlib.h>
struct students{
    char name[11];
    int roll;
    double gpa;
};
int main() {
    struct students s1;
    printf("Address of student instance: %p\n", (void*)&s1);
    printf("Address of name member: %p\n", (void*)&s1.name);
    printf("Address of roll member: %p\n", (void*)&s1.roll);
    printf("Address of gpa member: %p\n", (void*)&s1.gpa);
    printf("Size of student structure: %zu bytes\n", sizeof(struct students));
    return 0;
}