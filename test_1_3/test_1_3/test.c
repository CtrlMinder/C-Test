#define _CRT_SECURE_NO_WARNINGS 1
//00000000000000000000000000001001  ---  9
//S = 0  E = 1 - 127 = -126  M = 0.00001001  ����������+0
//9.0  ---  1001.0  ---  1.001*2^3
//0 10000010 00100000000000000000000   ---   9.0
//2^30
//#include <stdio.h>
//int main()
//{
//	//int n = 9;
//	printf("%d\n",9.0);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*parr)[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*pa)[5] = arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(pa + i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//a+aa+aaa+aaaa+...��n��
//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	int a = 0;
//	scanf("%d%d", &n, &a);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>//����ָ���ӡһά���������
//void print(int*);
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr);
//	return 0;
//}
//void print(int* p)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//#include <stdio.h>//ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int beg = i;
//		int sum = 0;
//		int n = 0;
//		while (beg)
//		{
//			beg = beg / 10;
//			n++;
//		}
//		beg = i;
//		while (beg)
//		{
//			sum += (int)pow(beg % 10, n);
//			beg /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>//�����ַ���
//#include <string.h>
//void reverse(char* pc);
//int main()
//{
//	char ch[1000] = { 0 };
//	gets(ch);
//	reverse(ch);
//	printf("%s\n", ch);
//	return 0;
//}
//void reverse(char* pc)
//{
//	int len = strlen(pc);
//	char* left = pc;
//	char* right = pc + len - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//#include <stdio.h>//��ӡ�����ַ�
//#include <math.h>
//int main()
//{
//	int line = 0;
//	char ch[10] = { 0 };
//	scanf("%d %s", &line, ch);//line - ����  ch - ��ӡ���ַ���
//	int i = 0;
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < fabs(line / 2 + 1 - i); j++)
//		{
//			printf("  ");//�����ո�����һ������ռ�����ո�
//		}
//		for (j = 0; j < (int)(line - 2 * fabs(line / 2 + 1 - i)); j++)
//		{
//			printf("%s", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//һƿ��ˮ1Ԫ��������ƿ��һƿ��ˮ��20Ԫ�ܻ�����
//20Ԫ������ˮ��20ƿ - 20����ƿ
//20��ƿ - 10ƿ��ˮ - 10����ƿ
//10��ƿ - 5ƿ��ˮ - 5����ƿ
//5��ƿ����һƿ - 3ƿ��ˮ - 2����ƿ
//2��ƿ - 1ƿ��ˮ - 1����ƿ
//1��ƿ����1ƿ - 1ƿ��ˮ 
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int count = 0;//��ƿ��
//	int water = 0;//��ˮ��
//	scanf("%d", &money);
//	count = money;//count = 20
//	water = money;//water = 20
//	//while (count)//���˰汾
//	//{
//	//	if (count % 2 == 1)
//	//	{
//	//		water = water + count / 2 + 1;
//	//		count = count / 2;
//	//	}
//	//	else
//	//	{
//	//		water = water + count / 2;
//	//		count = count / 2;
//	//	}
//	//}
//	while (count != 1)//�����˰汾
//	{
//			water = water + count / 2;
//			count = count / 2 + count % 2;
//	}
//	printf("%d\n", water);
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//void reverse(int[], int);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////void reverse(int arr[], int n)//���ⴴ������汾
////{
////	int arr1[1000] = { 0 };
////	memcpy(arr1, arr, 4*n);
////	int k = n - 1;
////	int j = 0;
////	int i = 0;
////	for (i = 0; i < n; i++)
////	{
////		if (arr1[i] % 2 == 1)
////		{
////			arr[j] = arr1[i];
////			j++;
////		}
////		else
////		{
////			arr[k] = arr1[i];
////			k--;
////		}
////	}
////}
//void reverse(int arr[], int n)//ǰ��ƽ��汾
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		while ((arr[left] % 2)&&(left<right))
//		{
//			left++;
//		}
//		while((!(arr[right] % 2))&&(left<right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}

#include <stdio.h>
int check_sys()
{
    int i = 1;
    return (*(char*)&i);//��i�ĵ�ַȡ������ǿ������ת����(char*)���ͣ��ٽ��н����ò���
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    return 0;
}