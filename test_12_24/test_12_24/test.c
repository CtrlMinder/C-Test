#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, sum = 0, out = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		out = out * i;
//		sum = sum + out;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int low = 0;
//	int high = 9;
//	int mid = 0;
//	int search = 0;
//	scanf("%d", &search);//有序数组查找
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (search == arr[mid])
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		else if (search > arr[mid])
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	if (low > high)
//		printf("输入值超出范围\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr[] = "welcome to nuist!!!";
//	char ch[1000] = { 0 };
//	int sz = strlen(arr);
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	for (i = 0; i < sz; i++)
//	{
//		ch[i] = '#';
//	}
//	for (; left <= right; left++, right--)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			if (i <= left || i >= right)
//				printf("%c", arr[i]);
//			else
//				printf("%c", ch[i]);
//		}
//		printf("\n");
//		Sleep(1000);//睡眠1秒
//		system("cls");//清空屏幕
//	}
//	/*for (; left <= right; left++, right--)
//	{
//		ch[left] = arr[left];
//		ch[right] = arr[right];
//		printf("%s\n", ch);
//		Sleep(1000);//睡眠1秒
//		syetem("cls");//清空屏幕
//	}*/
//	printf("%s\n", arr);
//	if (left > right)
//		printf("输出完毕\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	char ch[1000] = { 0 };
//	int i = 0;
//	printf("请输入密码（不允许输入空格）：\n");
//	scanf("%s", arr);
//	for (i = 0; i < 3; i++)
//	{
//		printf("请确认密码（三次机会）：\n");
//		scanf("%s", ch);
//		if(strcmp(arr,ch) == 0)
//		{ 
//			printf("确认成功\n");
//			break;
//		}
//		if (i < 3)
//		{
//			printf("密码确认失败\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu();
//void game();
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));//设置一个随机数种子，调用时间函数,srand函数要求参数为unsigned int类型
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("*************************************************\n");
//	printf("***************猜数字游戏开始了!!!***************\n");
//	printf("******************请选择：>1/0*******************\n");
//	printf("*****************1:  PLAY!!   ********************\n");
//	printf("*****************0:  EXIT!!   *******************\n");
//	printf("*************************************************\n");
//}
//void game()
//{
//	int ret = rand() / 100 + 1;//设置一个1-100之间的随机数
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//				break;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int temp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int fun(int a, int b);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = fun(a, b);
//	printf("%d", ret);
//	return 0;
//}
//int fun(int a, int b)
//{
//	int r = 0;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	return b;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 100 != 0 && i % 4 == 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int fun(int i);
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (fun(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int fun(int i)//判断是否为素数
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j <= sqrt(1.0 * i); j++)
//	{
//		if (i % j == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//关机程序
//运行程序，系统将在60秒后关机，输入：我是猪 可取消关机
//shutdown -s -t 60   60秒后关机   -s设置关机   -t设置时间
//shutdown -a     取消关机
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒内关机，输入：我是傻猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是傻猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	switch (i)
	{
	default:
		printf("haha\n");
	case 1:
		printf("xixi\n");
		break;
	case 2:
		printf("hehe\n");
		break;
	}
	return 0;
}