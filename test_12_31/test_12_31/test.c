#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[6] = { 0 };
//	printf("%s\n", strcpy(arr2, arr1));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcpy(char*, char*);
//int main()
//{
//	char arr1[20] = "hello bit";
//	char arr2[20] = "hello world";
//	//my_strcpy(arr1, arr2);
//	//strcpy(arr1, NULL);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr2 != NULL);//���� - ����Ϊ�棬�޷�Ӧ
//	//����Ϊ�٣�����ָ����������λ�ã��Լ���ֹ����
//	assert(arr1 != NULL);
//	char* dest = arr1;
//	while (*arr1++ = *arr2++);
//	return dest;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	//const int* p = &num;//const��*��ߣ�*p���ܸı䣬p��ָ����Ըı�
//	//int* const p = &num;//const��*�ұߣ�p��ָ���ܸı䣬*p���Ըı�
//	int* p = &num;
//	//int** pp = &p;
//	//num = 20;
//	printf("%d\n",num);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char*, const char*);
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src) 
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	for (i = 0; dest[i] = src[i]; i++);
//	return dest;
//}

