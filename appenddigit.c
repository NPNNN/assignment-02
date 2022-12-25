#include<stdio.h>
int main()
{
    int n,d,s,r;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a digit:");
    scanf("%d",&d);
    r=n*10;
    s=r+d;
    printf("After append the digit resulting number is %d",s);
    return 0;
}