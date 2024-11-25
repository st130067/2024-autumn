#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	scanf_s("%d", &x);
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	x1 = x / 100;
	x2 = x % 100 / 10;
	x3 = x % 10;
	printf("%d", x1 + x2 + x3);
	return EXIT_SUCCESS;
}