#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	const int n = 10;//const修饰的常变量，本质是变量，值不可修改
//	n = 20;
//	printf("%d\n", n);
//	return 0;
//#include<stdio.h>//求一个字符串中子字符串出现的次数
//int main()
//{
//	char ch1[1000] = { 0 };
//	char ch2[1000] = { 0 };
//	int sz1 = 0;
//	int sz2 = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	printf("input string1:\n");
//	for (sz1 = 0; (ch1[sz1] = getchar()) != '\n'; sz1++);
//	printf("input string2:\n");
//	for (sz2 = 0; (ch2[sz2] = getchar()) != '\n'; sz2++);
//	for (i = 0; i < sz1; )
//	{
//		int flag = 1;
//		for (j = 0; j < sz2; j++)
//		{
//			if (ch1[i + j] != ch2[j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			i = i + j;
//			count++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 101; i += 2)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x = 0;
//	double ret = 0;
//	scanf("%lf", &x);
//	if (x < -1)
//	{
//		ret = 1 / x;
//	}
//	else if (x >= -1 && x <= 1)
//	{
//		ret = x;
//	}
//	else
//	{
//		ret = sqrt(x);
//	}
//	printf("%lf\n", ret);
//	return 0;
//}
//#include<stdio.h>
//void Sort(int ,int );//冒泡排序
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	Sort(arr,n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void Sort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1- i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{ 
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//#include<stdio.h>//武松打虎
//void Sort(long arr[], int);//冒泡排序
//int main()
//{
//	long arr[1000] = { 0 };
//	long t = 0;
//	int n = 0;
//	while ((scanf("%d%ld", &n, &t)) != EOF)
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%ld", &arr[i]);
//		}
//		Sort(arr, n);
//		for (i = 0; i < n; i++)
//		{
//			t = t - arr[i];
//			if (t >= 0)
//			{
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//void Sort(long arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//#include<stdio.h>//统计单词数
//int main()
//{
//	int ch[1000] = { 0 };
//	int i, flag, count;
//	char c;
//	i = 0;
//	flag = 0;
//	count = 0;
//	while ((ch[i++] = getchar()) != '\n');
//	ch[i] = '\0';
//	for (i = 0; (c = ch[i]) != '\0'; i++)
//	{
//		if (c == ' ')
//			flag = 0;
//		else if (flag == 0)
//		{
//			flag = 1;
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch[10000] = { 0 };
//	int i = 0;
//	int flag = 1;
//	int count = 1;
//	for (i = 0; (ch[i] = getchar()) != '\n'; i++);
//	ch[i] = '\0';
//	for (i = 0; ch[i] != '\0'; i++)
//	{
//		if (ch[i] == ' ')
//			flag = 0;
//		else if (flag == 0)
//		{
//			count++;
//			flag = 1;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
