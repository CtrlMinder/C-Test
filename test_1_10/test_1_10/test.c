#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int row = 0;
//	while ((scanf("%d", &row)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < row; i++)
//		{
//			int j = 0;
//			for (j = 0; j < row; j++)
//			{
//				if (i == j || (i + j == row - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//	double max = arr[0];
//	double min = arr[0];
//	double sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//		sum = sum + arr[i];
//	}
//	sum = (sum - max - min) / 5;
//	printf("%.2lf\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while ((scanf("%d %d", &y, &m)) != EOF)
//	{
//		switch (m)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("%d", 31);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("%d", 30);
//			break;
//		case 2:
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//			{
//				printf("%d", 29);
//			}
//			else
//			{
//				printf("%d", 28);
//			}
//			break;
//		default:
//			break;
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (m < arr[i])
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	arr[i + 1] = m;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
