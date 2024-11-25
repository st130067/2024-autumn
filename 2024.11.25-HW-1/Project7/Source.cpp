#include<iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	scanf_s("%d", &v);
	scanf_s("%d", &t);
	int s = 0;
	s = (v * t % 109 + 109) % 109 + 1;
	printf("%d", s);
	return EXIT_SUCCESS;
}