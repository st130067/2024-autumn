1
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a + b);
	return EXIT_SUCCESS;
}
2
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", a);
	return EXIT_SUCCESS;
}
3
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", a + 1);
	return EXIT_SUCCESS;
}
4
#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", n * a * b * 2);
	return EXIT_SUCCESS;
}
5
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%s %d %s %d%s\n", "The next number for the number", a, "is", a + 1, ".");
	printf("%s %d %s %d%s\n", "The previous number for the number", a, "is", a - 1, ".");
	return EXIT_SUCCESS;
}
6
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d %d", b - 1, a - 1);
	return EXIT_SUCCESS;
}
7
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
8
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
10
#include<iostream>

int main(int argc, char* argv[])
{
	int vse = 0;
	scanf_s("%d", &vse);
	int k = 0;
	int sp = 0;
	sp = vse / 6;
	k = sp * 4;
	printf("%d %d %d", sp, k, sp);
	return EXIT_SUCCESS;
}