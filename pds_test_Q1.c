#include<stdio.h>
int main(){
    int r;
    float pi=3.14;
    printf("enter the value of the radius:");
    scanf("%d",&r);
    float a,b;
    a=(4/3)*pi*r*r*r;
    b=4*pi*r*r;
    printf("volume of the sphere is : %.2f",a);
    printf("\nsurface area of the sphere is ; %.2f",b);
    return 0;
}