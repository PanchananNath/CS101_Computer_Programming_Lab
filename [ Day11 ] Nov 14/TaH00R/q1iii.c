#include <stdio.h>
#include <stdlib.h>
struct students{
    char name[11];
    int roll;
    double gpa;
};
int main() {
    struct students Array[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%10s", Array[i].name);
        printf("Roll: ");
        scanf("%d", &Array[i].roll);
        printf("GPA: ");
        scanf("%lf", &Array[i].gpa);
    }
    for(int i = 0; i < 5; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Address of student %d: %p\n", i + 1, (void*)&Array[i]);
        printf("Name: %s\n", Array[i].name);
        printf("Roll: %d\n", Array[i].roll);
        printf("GPA: %.2f\n", Array[i].gpa);
    }
    return 0;
}