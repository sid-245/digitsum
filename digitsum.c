#include<stdio.h>
int main()
{
   int a,sum=0,num;
    printf("enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        sum=a+sum;
        num=num/10;
    }
    printf("sum=%d",sum);
    return 0;
    
}