#include <stdio.h>
int main()
{
    int num, temp, j,number, digits = 0, d;
    printf("enter a number:");
    scanf("%d", &num);
    temp = num;
    number=num;
    for (int i = 0; j > 0; i++)
    {
        j = num / 10;
        num = num / 10;
        digits++;
    }
    d = digits;
    printf("no of digits:%d",d);
    int arr[d], fact[d],sum;
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
        for (int j = 1; j < arr[i]; j++)
        {
            fact[i] = fact[i]*j;
            
        }
         for (int i=0;i<d;i++){
        sum=sum+fact[i];
    }
    }
    

if (sum==number)
{
    printf("\nthe given number is strong number");
}else{
    printf("\nthe given number is not a strong number");
}
printf("\nsum is a %d",sum);
printf("\n1st is%d,\n2nd is %d,\n3rd is %d",fact[0],fact[1],fact[2]);
printf("\n1s is%d,\n2n is %d,\n3r is %d",arr[0],arr[1],arr[2]);
    return 0;
}