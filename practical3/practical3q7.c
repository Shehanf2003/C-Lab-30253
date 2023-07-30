#include <stdio.h>
int main
{
    int basicSalary, yearsOfService, monthlySales;
    char city;
    float additionalAllowance , bonusPercentage , bonusAmount , grossRemuneration ;

    printf("Enter the basic salary: ");
    scanf("%d", &basicSalary);

    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the city (C for Colombo): ");
    scanf(" %c", &city);

    printf("Enter the monthly sales: ");
    scanf("%d", &monthlySales);

    if (yearsOfService > 5)
        {
        additionalAllowance = basicSalary * 0.1;
    }

    if (city == 'C')
        {
        additionalAllowance = 2500;
    }

    if ( monthlySales <= 25000)
        {
        bonusPercentage = 0.1;
    }
    else if (monthlySales < 50000)
        {
        bonusPercentage = 0.12;
    }
    else
bonusPercentage = 0.15;


    bonusAmount = monthlySales * bonusPercentage;
    grossRemuneration = basicSalary + additionalAllowance + bonusAmount;

    printf("Gross monthly remuneration: %.2f\n", grossRemuneration);

}
