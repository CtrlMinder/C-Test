#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int gcd(int, int);
int main()
{
	int dividend = 24;//������
	int divisor = 14;//����
	// ʹ��whileѭ��ִ��շת�����
	while (dividend % divisor != 0)
	{
		int remainder = dividend % divisor;//��������
		dividend = divisor;//����������������
		divisor = remainder;//��������������
	}
	printf("���Լ��Ϊ:%d\n", gcd(dividend,divisor));//������
	return 0;
}
// ʹ�õݹ鷽ʽ�������Լ��
int gcd(int num1, int num2)
{
	// ���num2��num1����������num2�������Լ��
	if (num1 % num2 == 0)
	{
		return num2;
	}
	else // ���򣬼���num2��num1%num2�����Լ��
	{
		return gcd(num2, num1 % num2);
	}
}
