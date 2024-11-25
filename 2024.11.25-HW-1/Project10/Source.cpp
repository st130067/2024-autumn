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