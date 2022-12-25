#include<stdio.h>
int main()
{
    float amt, usd,inr=76.23;
    printf("Enter the ammout in INR:");
    scanf("%f",&amt);
    usd=amt/inr;
    printf("Ammount after convert the INR to USD is %f",usd);
    return 0;
}