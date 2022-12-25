#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a&1)
    printf("LSB of %d set (1)",a);
    else
    printf("LSB of %d set (0)",a);
    return 0;  
 }