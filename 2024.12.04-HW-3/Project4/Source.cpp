#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int v = 0;
    int s = 0;
    int j = 0;
    int max = -1;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &v);
        scanf_s("%d", &s);
        if (s == 1 && v > max)
        {
            max = v; j = i + 1;
        }
    }
    if (j == 0)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", j);
    }
    return EXIT_SUCCESS;
}