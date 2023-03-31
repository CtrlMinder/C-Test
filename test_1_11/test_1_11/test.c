#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char arr[10000] = { 0 };
    scanf("%s", arr);
    int i = 0;
    int flag = 1;
    for (i = 0; arr[i]!='\0'; i++)
    {
        int count = 0;
        int j = 0;
        for (j = 0; j < arr[i] != '\0'; j++)
        {
            if (arr[j] == (i+'0'))
            {
                count++;
            }
        }
        if ((count+'0') != arr[i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}