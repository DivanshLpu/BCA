#include <stdio.h>

void binary(int num)
{
    int remainder;
    int result[32];
    int i = 0;

    while (num > 0)
    {
        remainder = num % 2;
        result[i] = remainder;
        i++;

        num = num / 2;
    }

    while (i > 0)
    {
        i--;
        printf("%d", result[i]);
    }

    printf("\n");
}

int main()
{
    binary(1);
    binary(2);
    binary(13);
    binary(25);

    return 0;
}