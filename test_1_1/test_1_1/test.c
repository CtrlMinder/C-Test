#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//size_t  my_strlen(const char* str);
//int main()
//{
//	char ch[1000] = { 0 };
//	int i = 0;
//	while ((ch[i++] = getchar()) != '\n');
//	ch[i-1] = '\0';
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* src = str;
//	while (*src++);
//	return (src - str - 1);
//}
//#include <stdio.h>
//int NumOf1(int ret);
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 ^ num2;
//	int count = NumOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}
////int NumOf1(int ret)//°æ±¾1
////{
////	int count = 0;
////	while (ret)
////	{
////		if (ret & 1)
////		{
////			count++;
////		}
////		ret = ret >> 1;
////	}
////	return count;
////}
//int NumOf1(int ret)//°æ±¾2
//{
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//#include <stdio.h>
//int main()
//{
//	char ch1[1000] = { 0 };
//	char ch2[1000] = { 0 };
//	int sz = 0;
//	int j = 0;
//	while ((ch1[sz++] = getchar()) != '\n');
//	ch1[--sz] = ' ';
//	for (sz = sz-1; sz>=0; sz--)
//	{
//		if (ch1[sz] == ' ')
//		{
//			int i = sz;
//			for (i = sz + 1; ch1[i] != ' '; i++)
//			{
//				ch2[j++] = ch1[i];
//			}
//			ch2[j++] = ' ';
//		}
//		else if (sz == 0)
//		{
//			int i = sz;
//			for (i = sz; ch1[i] != ' '; i++)
//			{
//				ch2[j++] = ch1[i];
//			}
//			ch2[j++] = ' ';
//		}
//	}
//	ch2[--j] = '\0';
//	for (j = 0; ch2[j] != '\0'; j++)
//	{
//		putchar(ch2[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(char* left, char* right);
//int main()
//{
//	char ch[1000] = { 0 };
//	int sz = 0;
//	while ((ch[sz++] = getchar()) != '\n');
//	ch[--sz] = '\0';
//	reverse(ch, ch + sz - 1);//ÄæÐòÕû¸ö×Ö·û´®
//	char* start = ch;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);//ÄæÐòÃ¿¸öµ¥´Ê
//		if (*end != '\0')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	for (sz = 0; ch[sz] != '\0'; sz++)
//	{
//		putchar(ch[sz]);
//	}
//	return 0;
//}
//void reverse(char* left, char* right)//ÄæÐò×Ö·û´®
//{
//	while (left < right)
//	{
//		char temp = 0;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
#include <stdio.h>
int zlt(int n, int* a);
int main()
{
	int t, n, m, a[100000] = { 0 };
	int i, j;
	int sum;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d%d", &m, &n);
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
		}
		sum = zlt(n, a);
		//printf("%d", sum);
		sum = m - sum;
		//printf("%d", sum);
		if (sum > 0)
			printf("%d\n", sum);
		else
			printf("Can't get the top!\n");
	}
	return 0;
}
int zlt(int n, int* a)
{
	int x, y, sum = 0;
	int i;
	x = a[0], y = a[1];
	for (i = 2; i < n; i++)
	{
		if (x >= y)
			a[i] = y + a[i];
		else
			a[i] = x + a[i];
		x = y, y = a[i];
	}
	return y;
}
size_t