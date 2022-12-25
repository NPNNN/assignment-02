#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two number that you want to swap:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("value after the swap is=%d\n%d",a,b);
    return 0;
}