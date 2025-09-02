#include <stdio.h>

int main()
{
    float c,result;
    printf("The temperature in celsius: ");
    scanf("%f",&c);
    result=(9*c/5)+32;
    printf("The Temperature in fahrenheit= %.4f",result);
    return 0;


}