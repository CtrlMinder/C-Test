#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	unsigned char a = 100;
//	unsigned char b = 200;
//	unsigned char c = 0;
//	//100 - 01100100
//	//200 - 11001000
//	//300 - 100101100
//	c = a + b;
//	//c - 00101100 - 44
//	int z = -10;
//	printf("%u\n", z);
//	return 0;
//}
//#include <stdio.h>//杨辉三角
//#define N 7
//int main()
//{
//	int arr[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//猜凶手
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		int sum = (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D');
//		if (sum == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>//猜名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((((a == 3) + (b == 2)) == 1)
//							&& (((b == 2) + (e == 4)) == 1)
//							&& (((c == 1) + (d == 2)) == 1)
//							&& (((c == 5) + (d == 3)) == 1)
//							&& (((e == 4) + (a == 1)) == 1)
//							&&(a*b*c*d*e==120))
//						{
//							printf("a = %d b = %d c = %d d = %d e = %d\n"
//								, a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{3,4},  {5, 6} };
//	int(*pa)[5] = arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(pa+i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//函数指针数组版本
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1. Add  2. Sub ********\n");
//	printf("****** 3. Mul  4. Div ********\n");
//	printf("***********  0. exit  ********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		int (*Calc[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个数:> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Calc[input](x, y));
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>//回调函数版本
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1. Add  2. Sub ********\n");
//	printf("****** 3. Mul  4. Div ********\n");
//	printf("***********  0. exit  ********\n");
//	printf("******************************\n");
//}
//void Caul(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Caul(Add);
//			break;
//		case 2:
//			Caul(Sub);
//			break;
//		case 3:
//			Caul(Mul);
//			break;
//		case 4:
//			Caul(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//#define N 10
//void bubble_sort(int arr[]);//冒泡排序
//void print(int arr[]);//打印数组
//int main()
//{
//	int arr[N] = { 10,9,8,3,6,5,4,7,2,1 };
//	bubble_sort(arr);
//	print(arr);
//	return 0;
//}
//void bubble_sort(int arr[])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = flag;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
#include <stdio.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2);
int sort_age(const void* e1, const void* e2);
int sort_name(const void* e1, const void* e2);
void test();
void print_arr(int[], int);
void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2));
void Swap(char* buf1, char* buf2, size_t width);
void test1();
int main()
{
	//test();
	test1();
	return 0;
}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void test()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr,sz);
}
void test1()
{
	struct Stu stu[3] = { {"zhang",50},{"li",35},{"wang",40} };
	unsigned int sz = sizeof(stu) / sizeof(stu[0]);
	//bubble_sort(stu, sz, sizeof(stu[0]), sort_age);
	bubble_sort(stu, sz, sizeof(stu[0]), sort_name);
}
int sort_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	unsigned int i = 0;
	//冒泡排序
	for (i = 0; i < num - 1; i++)
	{
		//一趟排序
		unsigned int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//比较两个元素大小
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换两个元素
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void Swap(char* buf1, char* buf2, size_t width)
{
	unsigned int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}