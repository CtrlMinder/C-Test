#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <ctype.h>
//#include <limits.h>
//enum STATE
//{
//	INVALID,
//	VALID
//};
//enum STATE s = INVALID;
//int my_atoi(char* p)
//{
//	int flag = 1;
//	if (p == NULL)
//	{
//		return 0;
//	}
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*p))
//	{
//		p++;
//	}
//	if (*p == '+')
//	{
//		flag = 1;
//		p++;
//	}
//	else if (*p == '-')
//	{
//		flag = -1;
//		p++;
//	}
//	long long ret = 0;
//	while (isdigit(*p))
//	{
//		ret = ret * 10 + (*p - '0') * flag;
//		if (ret > INT_MAX || ret < INT_MIN)
//			return 0;
//		p++;
//	}
//	if (*p == '\0')
//	{
//		s = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//int main()
//{
//	char* p = "   -123454a";
//	int ret = my_atoi(p);
//	if (s == VALID)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("非法:%d\n", ret);
//	}
//	return 0;
//}

//#include <stdio.h>
//void Find(int arr[], int sz, int* px, int* py)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*px = *px ^ arr[i];
//		}
//		else
//		{
//			*py = *py ^ arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Find(arr, sz, &x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//#include <stdio.h>
//#define SWAP(N) (((N&0xaaaaaaaa)>>1)+((N&0x55555555)<<1))//交换二进制的奇数位和偶数位
//int main()
//{
//	int num = 10;
//	int ret = SWAP(num);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char c;
//	int i;
//	long l;
//};
//#define OFFSETOF(struct_name,member_name) (int)(&(((struct_name*)0)->member_name))
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S,c));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, l));
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(int);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}