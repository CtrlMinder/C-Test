#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int month = 0;
	int day = 0;
	scanf("%d %d", &month, &day);
	int i = 0;
	int days = 0;
	for (i = 1; i < month; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days += 31;
			break;
		case 2:
			days += 28;
			break;
		default:
			days += 30;
			break;
		}
	}
	days += day;
	printf("%d\n", days);
	return 0;
}