#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////#pragma pack(4)
//struct S
//{
//	int data[998];
//	int num;
//};
////#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//#include <stdio.h>
//enum SEX
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum SEX s1 = female;
//	int s = female;
//	printf("%d\n", s);
//	return 0;
//}
#include <stdio.h>
int check_sys()
{
	union U
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_sys();
	if (ret)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}