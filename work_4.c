#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
int main()
{
	float a, b, c,q,s;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		q = (a + b + c) / 2;
		s = sqrt(q * (q - a) * (q - b) * (q - c));
		printf("area=%.2f", s);
	}
	else
		printf("error");
	return 0;
}