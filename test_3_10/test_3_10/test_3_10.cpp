#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	for (int i = 153; i < 1000; i++)
	{
		int sum = 0;
		int temp = i;
		while (temp != 0)
		{
			sum += (temp % 10) * (temp % 10) * (temp % 10);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}