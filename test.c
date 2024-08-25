#include <stdio.h>

#define BASE_PAY_RATE 10.0
#define OVERTIME_PAY_RATE 1.5 * BASE_PAY_RATE
#define BASE_HOURS 40
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_BRACKET_1 300.0
#define TAX_BRACKET_2 150.0

// 计算总工资
double calculate_gross_pay(int hours)
{
    if (hours <= BASE_HOURS)
    {
        return hours * BASE_PAY_RATE;
    }
    else
    {
        return BASE_HOURS * BASE_PAY_RATE + (hours - BASE_HOURS) * OVERTIME_PAY_RATE;
    }
}

// 计算税金
double calculate_taxes(double gross_pay)
{
    if (gross_pay <= TAX_BRACKET_1)
    {
        return gross_pay * TAX_RATE_1;
    }
    else if (gross_pay <= TAX_BRACKET_1 + TAX_BRACKET_2)
    {
        return TAX_BRACKET_1 * TAX_RATE_1 + (gross_pay - TAX_BRACKET_1) * TAX_RATE_2;
    }
    else
    {
        return TAX_BRACKET_1 * TAX_RATE_1 + TAX_BRACKET_2 * TAX_RATE_2 + (gross_pay - TAX_BRACKET_1 - TAX_BRACKET_2) * TAX_RATE_3;
    }
}

int main(void)
{
    int hours;
    double gross_pay, taxes, net_pay;

    // 输入工作小时数
    printf("请输入工作小时数: ");
    scanf("%d", &hours);

    // 计算总工资
    gross_pay = calculate_gross_pay(hours);

    // 计算税金
    taxes = calculate_taxes(gross_pay);

    // 计算净收入
    net_pay = gross_pay - taxes;

    // 输出结果
    printf("总工资: $%.2f\n", gross_pay);
    printf("税金: $%.2f\n", taxes);
    printf("净收入: $%.2f\n", net_pay);

    return 0;
}