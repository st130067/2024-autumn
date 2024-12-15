#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    n *= n;
    int drg = 0;
    int x = 0;
    while (n != 0)
    {
        scanf_s("%d", &x);
        drg += x;
        n--;
    }
    printf("%d", drg / 2);
    return EXIT_SUCCESS;
}