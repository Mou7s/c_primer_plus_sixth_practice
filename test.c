//fibonacci 递归

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("斐波那契数列的第%d项为%d\n", n, fibonacci(n));
    return 0;
}


