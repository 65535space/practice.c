/*List7-11*/
//Find the distance between two points

#include <stdio.h>

//---Find the distance between points (x1,y1) and (x2,y2) ---//
double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main(void) {
    double x1, y1; //point 1
    double x2, y2; //point 2

    printf("find the distance between two points. \n");
    printf("point1  /// x-coordinate:");
    scanf("%lf", &x1);
    printf("            y-coordinate:");
    scanf("%lf", &y1);
    printf("point2  /// x-coordinate:");
    scanf("%lf", &x2);
    printf("            x-coordinate:");
    scanf("%lf", &y2);

    printf("the distance is %f.\n", dist(x1, y1, x2, y2));

    return 0;
}