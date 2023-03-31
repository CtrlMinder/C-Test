#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int arr1[] = { 1,2,3 };
	//编译不通过
	// 左值为数组名，代表数组首元素地址，无法修改
	//arr = arr1;
	return 0;
}