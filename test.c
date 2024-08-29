#include <stdio.h>

double calculateTax(double salary)
{
    if (salary < 17850)
    {
        return salary * 0.15;
    }
    else
    {
        return 17850 * 0.15 + (salary - 17850) * 0.28;
    }
}

int main()
{
    double salary;
    printf("Enter your salary: ");
    if (scanf("%lf", &salary) != 1)
    {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // 非正常结束
    }
    printf("Tax to be paid: %.2lf\n", calculateTax(salary));

    return 0;
}