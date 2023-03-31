#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct student
{
	char name[20];
	int score;
}Stu;
int main()
{
	Stu stu[3] = { {"zhangsan", 99}, {"lisi", 61}, {"wangwu", 88} };
	int i = 0;
	int j = 0;
	int sz = sizeof(stu) / sizeof(Stu);
	double avg = 0;
	for (i = 0; i < sz; i++)
	{
		avg = avg + (double)stu[i].score;
	}
	avg = avg / sz;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (stu[j].score > stu[j + 1].score)
			{
				int temp = stu[j].score;
				stu[j].score = stu[j + 1].score;
				stu[j + 1].score = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", stu[i].name, stu[i].score);
	}
	printf("%.2lf\n", avg);
	return 0;
}