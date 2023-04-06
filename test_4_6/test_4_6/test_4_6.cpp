#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int gcd(int, int);
int main()
{
	int dividend = 24;//被除数
	int divisor = 14;//除数
	// 使用while循环执行辗转相除法
	while (dividend % divisor != 0)
	{
		int remainder = dividend % divisor;//计算余数
		dividend = divisor;//将除数赋给被除数
		divisor = remainder;//将余数赋给除数
	}
	printf("最大公约数为:%d\n", gcd(dividend,divisor));//输出结果
	return 0;
}
// 使用递归方式计算最大公约数
int gcd(int num1, int num2)
{
	// 如果num2是num1的因数，则num2就是最大公约数
	if (num1 % num2 == 0)
	{
		return num2;
	}
	else // 否则，计算num2和num1%num2的最大公约数
	{
		return gcd(num2, num1 % num2);
	}
}
