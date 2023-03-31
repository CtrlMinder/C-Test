#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void change(int* a, int* b);//交换两个数的值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	change(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//void change(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int fun(int a);//判断是否为素数
//int fun1(int a);//判断是否为闰年
//int search(int arr[], int key, int sz);//查找有序数组元素
//void Add(int* a);
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);
//	/*int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 0;
//	scanf("%d", &key);
//	int ret = search(arr, key, sz);
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("%d\n", ret);*/
//	/*scanf("%d", &a);
//	printf("%d\n", fun1(a));*/
//	return 0;
//}
//int fun(int a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(1.0 * a); i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int fun1(int a)
//{
//	return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//}
//int search(int a[10], int key,int sz)
//{
//	int low = 0;
//	int high = sz - 1;
//	while(low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (key < a[mid])
//			high = mid - 1;
//		else if (key > a[mid])
//			low = mid + 1;
//		else
//			return mid;
//	}
//	if (low > high)
//		return -1;
//}
//void Add(int* a)
//{
//	(*a)++;
//}
