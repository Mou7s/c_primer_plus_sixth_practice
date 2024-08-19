#include <stdio.h>

int main(void)
{
    // starts with 5 friends
    // 第一周朋友数量减1，每周朋友数量都比上一周多减一
    // every week friends decrease by 1, and the decrease is 1 more than the previous week
    //  every week friends double

    int i = 1;
    int friends = 5;

    while (friends < 150)
    {
        printf("At %d weeks, Rabnud has", i);
        friends = 2 * (friends - i++);
        printf("%4d friends.\n", friends);
    }
    printf("At %d weeks, over Dunbar's number(150).\n", i);
}