#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, i = 1, c;
	scanf("%d %d", &a, &b);
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
		}
		i++;
	}
	printf("%d",(a*b)/c);
	return 0;
}