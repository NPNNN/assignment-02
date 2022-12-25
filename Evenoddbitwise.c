#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if((n & 1)==0)
    printf("number is even");
    else
    printf("number is odd");
    return 0;
}