#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number that you want to swap:");
    scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
    printf("value after the swap is=%d\n%d",a,b);
    return 0;
}