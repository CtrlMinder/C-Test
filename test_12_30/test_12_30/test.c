#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void scanf_s1(int[], int);
//void reverse(int[], int);
//void print(int[], int);
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	scanf("%d", &sz);
//	scanf_s1(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void scanf_s1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//#include <stdio.h>
//#include <string.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int temp[10] = { 0 };
//	memcpy(temp, arr1, sizeof(arr1));
//	memcpy(arr1, arr2, sizeof(arr2));
//	memcpy(arr2, temp, sizeof(temp));
//	print(arr1, 10);
//	print(arr2, 10);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*pa)[10] = &arr;
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);
//	printf("%d\n",p);
//	printf("%d\n", p + 1);
//	printf("%d\n", pa);
//	printf("%d\n", pa + 1);
//	return 0;
////}
//#include <stdio.h>
//int my_strlen(char*);//统计字符串字符个数
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* str1 = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - str1;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//arr[2] <==> *(arr+2) <==> *(2+arr) <==> *(p+2) <==>*(2+p)
//	//2[arr] <==> *(2+arr) <==> p[2]
//	//[]是一个操作符 - 有两个操作数 - 数组名 + 下标
//	//计算机的底层逻辑是 - arr[2] - *(arr+2)
//	//2[arr]在计算机底层就是 - *(2+arr)
//	//数组名是数组首元素地址
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{3,4} ,{5,6} };
//	int(*p)[5] = &arr[0];
//	printf("%d\n", *(p+1)[0]);
//	return 0;
//}
#include <stdio.h>

int main()
{
    char arr[20] = { 0 };
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%s", arr);
    year = arr[3]-48 + (arr[2]-48) * 10 + (arr[1]-48) * 100 + (arr[0]-48) * 1000;
    month = (arr[4]-48) * 10 + arr[5]-48;
    date = (arr[6]-48) * 10 + arr[7]-48;
    printf("year = %d\n", year);
    printf("month = %04d\n", month);
    printf("date = %04d\n", date);
    return 0;
}