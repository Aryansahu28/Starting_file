#include <stdio.h>
#include <math.h>
int main(){
    float l1,l2,g1,g2,d,a;
    printf("Enter the values for latitude (l1,l2) and longitude (g1,g2)\n");
    scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
    a = sin(l1)*sin(l2) + (cos(l1)*cos(l2))*(cos(g2 - g1));
    d = 3963*(acos(a));
    printf("%f",d);
}