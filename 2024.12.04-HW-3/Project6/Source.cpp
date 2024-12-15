#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int max = 0;
	max = a > b ? a : b;
	for (int i = max; i < a*b+1; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d", i);break;
		}
	}
    return EXIT_SUCCESS;
}