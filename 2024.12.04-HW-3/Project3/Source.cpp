#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int k = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &x);
        if (x <= 437)
        {
            printf("%s%d", "Crash ", i + 1); break;
        }
        else
        {
            k++;
        }
    }
    if (k == n)
    {
        printf("%s", "No crash");
    }
    return EXIT_SUCCESS;
}