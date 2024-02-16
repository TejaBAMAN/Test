#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,e;
    float f,x1,x2;
    // here a,b,c are the coefficients of terms x^2,x,const in the quadratic equation of the form ax^2+bx+c
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    e=(b*b)-4*a*c;
    if (e>=0)
    {
      f=pow(e,0.5);
      x1=((-1*b+e)/2*a);
      x2=((-1*b-e)/2*a);
      printf("roots of the given equation are:%f,%f",x1,x2);
    }else{
printf("roots are imaginary");
    }
    return 0;

}