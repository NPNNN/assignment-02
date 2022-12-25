#include<stdio.h>
int main()
{
    int n,x,y;
    printf("Enter any number:");
    scanf("%d",&n);
    x=n/10;
    y=x*10;
    printf("The number after store zero in last position is %d",y);
    return 0;
}