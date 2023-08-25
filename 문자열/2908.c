#include <stdio.h>
#include <string.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int a1 = num1 / 100;
    num1 %= 100;
    int b1 = num1 / 10;
    num1 %= 10;
    int c1 = num1;
    int newnum1 = 100 * c1 + 10 * b1 + a1;
    int a2 = num2 / 100;
    num2 %= 100;
    int b2 = num2 / 10;
    num2 %= 10;
    int c2 = num2;
    int newnum2 = 100 * c2 + 10 * b2 + a2;
    if (newnum1 > newnum2)
        printf("%d", newnum1);
    else
        printf("%d", newnum2);
    return 0;
}