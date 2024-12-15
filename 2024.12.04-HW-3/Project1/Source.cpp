#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &x);
        if (x == 1)
        {
            a++;
        }
        if (x == 0)
        {
            b++;
        }
    }
    if (a > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a);
    }
    return EXIT_SUCCESS;
}