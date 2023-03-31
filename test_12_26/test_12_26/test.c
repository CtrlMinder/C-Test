#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void fun(int );//打印一个整型数字的每一位
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}
//void fun(int n)//递归思想
//{
//	//if (n / 10 == 0)
//	//	printf("%d ", n);
//	//else
//	//{
//	//	fun(n / 10);
//	//	printf("%d ", n % 10);
//	//}
//	if (n / 10 != 0)
//	{
//		fun(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//#include<stdio.h>
//int my_strlen(char* );//求字符串长度
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//int my_strlen(char* str)
//{
//	//int i = 0;常规版
//	//for (i = 0; *(str + i) != '\0'; i++);
//	//return i;
//	if (*str != '\0')//递归版
//		return 1 + my_strlen(str+1);
//	return 0;
//}
//#include<stdio.h>
//int Fac(int);//计算阶乘（递归思想）
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", Fac(num));
//	return 0;
//}
//int Fac(int a)
//{
//	if (a > 1)
//		return a * Fac(a - 1);
//	else
//		return 1;
//}
//#include<stdio.h>
//int Fib(int);//计算第n个斐波那契数的值
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	/*for (i = 0; i < n / 2; i++)//打印前n个斐波那契数
//	{
//		printf("%d %d ", f1, f2);
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}*/
//	printf("%d\n", Fib(n));
//	return 0;
//}
//int Fib(int n)
//{
//	/*if (n == 1 || n == 2)//（递归思想,效率太低）
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);*/
//	int i = 0;//循环，效率高
//	int f1 = 1;
//	int f2 = 1;
//	int ret = 1;
//	for (i = 0; i < n - 2; i++)
//	{
//		ret = f1 + f2;
//		f1 = f2;
//		f2 = ret;
//	}
//	return ret;
//}
//#include<stdio.h>
//int Han(int );//计算n层汉诺塔最少需要移多少步（递归思想）
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", Han(num));
//	return 0;
//}
//int Han(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return Han(n - 1) * 2 + 1;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n / 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//		if (n % 10 == 9)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[i];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void print_table(int);
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%-2d=%-4d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char );
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
////void reverse_string(char arr[])//非递归版本
////{
////	int sz = 0;
////	int i = 0;
////	int j = 0;
////	char temp;
////	for (sz = 0; arr[sz] != '\0'; sz++);
////	for (i = 0, j = sz - 1; i < sz / 2; i++, j--)
////	{
////		temp = arr[i];
////		arr[i] = arr[j];
////		arr[j] = temp;
////	}
////}
//void reverse_string(char arr[])//递归思想
//{
//	int sz = strlen(arr);
//	char temp;
//	temp = *arr;
//	*arr = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if (strlen(arr+1)>=2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[sz - 1] = temp;
//}
//#include<stdio.h>
//void print(int);
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//void print(int n)
//{
//	if (n / 10 != 0)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//#include<stdio.h>
//int sum(int);//求出整数每一位的和
//int main()
//{
//	int num = 1729;
//	int ret = sum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//int sum(int n)
//{
//	if (n / 10 != 0)
//		return n%10+sum(n / 10);
//	else 
//		return n;
//}
//#include<stdio.h>
//double Pow(int, int);//计算n的k次方（递归）
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%f\n", ret);
//	return 0;
//}
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//#include <stdio.h>//牛牛的字符菱形
//#include<math.h>
//int main()
//{
//    char a;
//    int i = 0;
//    int j = 0;
//    int temp = 1;
//    scanf("%c", &a);
//    for (i = 1; i <= 5; i++)
//    {
//        for (j = 0; j < abs(3 - i); j++)
//            printf(" ");
//        for (j = 0; j < temp; j++)
//            printf("%c", a);
//        if (i < 3)
//            temp += 2;
//        else
//            temp -= 2;
//        printf("\n");
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
	double a = 85.455;
	//a = ((int)(a * 100 + 0.5)) / 100.0;
	printf("%.2lf", a);
	return 0;
}