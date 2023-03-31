#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	int(*parr)[5] = arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int FindNum(int arr[][3], int* px, int* py, int k);//杨氏矩阵
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3;
//	int y = 3;
//	int k = 5;
//	int ret = FindNum(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了,坐标为：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int FindNum(int arr[][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void left_move(char ch[], int k);
//void  reverse(char* left, char* right);
//int main()
//{
//	char ch[] = "ABCDEF";
//	int k = 4;
//	left_move(ch, k);
//	printf("%s\n", ch);
//	return 0;
//}
//void  reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_move(char ch[], int k)//三步反转法
//{
//	int len = strlen(ch); 
//	k = k % len;
//	reverse(ch, ch + k - 1);
//	reverse(ch + k, ch + len - 1);
//	reverse(ch, ch + len - 1);
//}
//void left_move(char ch[], int k)
//{
//	int len = strlen(ch);
//	k = k % len;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char temp = ch[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[j] = temp;
//	}
//}
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char* str1, char* str2);
//int main()
//{
//	char str1[20] = "ABCDE";
//	char str2[] = "CDEAB";
//	int ret = is_left_move(str1, str2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int is_left_move(char* str1, char* str2)
//{
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	else
//	{
//		//1.追加一个字符串
//		int len = strlen(str1);
//		strncat(str1, str1, len);
//		//2.判断是否为子字符串
//		char* ret = strstr(str1, str2);
//		return (ret != NULL);
//	}
//}
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char temp = str1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[j] = temp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src);//模拟实现函数strcat
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	/*my_strcat(arr1, arr2)*/;
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cp = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return cp;
//}
#include <stdio.h>
int my_strcmp(const char* str1, const char* str2);//模拟实现库函数strcmp
int main()
{
	char* pa = "abc";
	char* pb = "abca";
	int ret = my_strcmp(pa, pb);
	if (ret > 0)
	{
		printf("pa>pb\n");
	}
	else if (ret < 0)
	{
		printf("pa<pb\n");
	}
	else
	{
		printf("pa == pb\n");
	}
	return 0;
}
int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
