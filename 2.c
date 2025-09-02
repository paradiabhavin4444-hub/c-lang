#include <stdio.h>

int main()
{
    int hra, da, ta;
    int salary;
    printf("Enter Base Salary: ");
    scanf("%d", &salary);
    hra = hra * 100 / salary;
    da = da * 100 / salary;
    ta = ta * 100 / salary;
    printf("House Rent Allowance is: ");
    scanf("%d", &hra);
    printf("Dearness Allowance is: ");
    scanf("%d", &da);
    printf("Tax Allowance: ");
    scanf("%d", &ta);
    int gross;
    gross = salary + hra + da + ta;
    printf("Gross Salary is: %d", gross);
}
