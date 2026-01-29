#include <stdio.h>

void biggest3(void);
void factorial(void);

int main()
{
    biggest3();
    factorial();
    return 0;
}
void biggest3(void)
{
    int a = 10, b = 20, c = 15;
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("Biggest of three numbers: %d\n", max);
}

void factorial(void)
{
    int n = 5, fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d is %d\n", n, fact);
}

//main()
//{
//	biggest3();
//	factorial();
//}

