#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2);//模拟实现strstr库函数
//int main()
//{
//	char arr1[] = "abcddefabcdef";
//	char arr2[] = "ddef";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}
////char* my_strstr(const char* str1, const char* str2)//版本1 - 不完善
////{
////	assert(str1 && str2);
////	int i = 0;
////	for (i = 0; *(str1 + i) != '\0'; i++)
////	{
////		if (*(str1 + i) == *str2)
////		{
////			int j = 0;
////			for (j = 0; *(str2 + j) != '\0'; j++)
////			{
////				if (*(str1 + i + j) != *(str2 + j))
////				{
////					break;
////				}
////			}
////			if (*(str2 + j) == '\0')
////			{
////				return (char*)(str1 + i);
////			}
////		}
////	}
////	return NULL;
////}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memcpy(void* dest, const void* src, size_t num);
void* my_memmove(void* dest, const void* src, size_t num);
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = {4,5,6,9,0};
	memmove(arr1, arr2, 20);
	return 0;
}
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* start = dest;
	while(num--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return start;
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* start = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else
	{
		while(num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return start;
}