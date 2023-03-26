#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    float r;
    float phi;
    printf("Enter the Cartesian Coordinates (x,y) of a point\n");
    scanf("%d%d",&x,&y);
    r = sqrt(pow(x,2)+pow(y,2));
    phi = ((atan2(y, x))*180)/3.14;
    printf("The Cartesian Coordinates into the polar coordinates are (%f, %lf)",r,phi);
}