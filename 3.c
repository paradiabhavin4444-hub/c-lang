#include <stdio.h>

int main()
{
    float f,s,result;
    printf("Enter First Angel: ");
    scanf("%f",&f);
    printf("Enter Second Angel: ");
    scanf("%f",&s);
   
    result=180-f-s;
    printf("Area of triangle= %.6f",result);
    return 0;


}