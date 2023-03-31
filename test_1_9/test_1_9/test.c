#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char* p = (char*)malloc(10);
//	strcpy(p, "hello");
//	printf(p);
//	return 0;
//}
struct S
{
	char c;
	int i;
	int arr[];
};
int main()
{
	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 10);
	if (s == NULL)
	{
		return 1;
	}
	s->c = 'a';
	s->i = 5;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		s->arr[i] = i;
	}
	free(s);
	s = NULL;
	printf("%d\n", sizeof(struct S));
	return 0;
}