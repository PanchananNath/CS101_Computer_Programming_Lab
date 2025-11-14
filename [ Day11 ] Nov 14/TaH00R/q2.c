#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point {
    int x;
    int y;
};
double distance(struct point p1, struct point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}
int main() {
    struct point p1, p2;
    printf("Enter coordinates of point 1 (x,y): ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x,y): ");
    scanf("%d %d", &p2.x, &p2.y);
    double dist = distance(p1, p2);
    printf("Distance between the points: %.2f\n", dist);
    return 0;
}
