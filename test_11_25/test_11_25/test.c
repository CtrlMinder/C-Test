//#include<stdio.h>//拐角方阵
//int main()
//{
//	int n,i,j;
//	int ch[25][25] = {0};
//	while((scanf("%d",&n))!=EOF)
//	{
//		for(i = 1;i<=n;i++)
//		{
//			for(j = 1;j<=n;j++)
//			{
//				if(j<=i)
//					ch[i][j] = j;
//				else
//					ch[i][j] = i;
//			}
//		}
//		for(i = 1;i<=n;i++)
//		{
//			for(j = 1;j<=n;j++)
//				printf("%d ",ch[i][j]);
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//统计单词数
//int main()
//{
//	int ch[1000] = {0};
//	int i,flag,count;
//	char c;
//	i = 0;
//	flag = 0;
//	count = 0;
//	while((ch[i++] = getchar())!='\n');
//	ch[i] = '\0';
//	for(i = 0;(c = ch[i])!='\0';i++)
//	{
//	if(c==' ')
//		flag = 0;
//	else if(flag == 0)
//	{
//		flag = 1;
//		count++;
//	}
//	}
//	printf("%d\n",count);
//return 0;
//}
//#include<stdio.h>//武松打虎
//int main()
//{
//	long int n,i,j,t,count,temp;
//	long int ch[50050] = {0};
//	while((scanf("%ld%ld",&n,&t))!=EOF)
//	{
//		count = 0;
//	for(i = 0;i<n;i++)
//		scanf("%ld",&ch[i]);
//	for(i = 0;i<n-1;i++)
//		{
//			for(j = 0;j<n-i-1;j++)
//			{
//			if(ch[j]>ch[j+1])
//			{
//			temp = ch[j+1];
//			ch[j+1] = ch[j];
//			ch[j] = temp;
//			}
//			}
//	}
//	for(i = 0;i<n;i++)
//	{
//	t = t-ch[i];
//	if(t>=0)
//		count++;
//	else
//		break;
//	}
//	printf("%d\n",count);
//	}
//return 0;
//}
#include<stdio.h>//运动会入场
#include<string.h>
void fun(char ch[][20],int n);
int main()
{
	char ch[200][20] = {0};
	char arr[] = {'C','h','i','n','a','\0'};
	int n,i,j,k,flag;
	scanf("%d",&n);
		getchar();
		for(i = 0;i<n;i++)
		{
			j = 0;
			/*while((ch[i][j++] = getchar())!='\n');
			ch[i][j] = '\0';*/
			scanf("%s",ch[i]);
			/*flag = 0;
			for(j = 0;j<5;j++)
			{
				if(arr[j]==ch[i][j])
					flag = 0;
				else
					flag = 1;
			}
			if(flag==0)
				k = i;*/
		}
		/*for(j = k;j<n-1;j++)
			strcpy(ch[j],ch[j+1]);*/
		fun(ch,n/*-1*/);
		/*strcpy(ch[n-1],arr);*/
		for(i = 0;i<n;i++)
		{
			if(strcmp(ch[i],"China"))
			{
				printf("%s\n",ch[i]);
			}
			/*for(j = 0;ch[i][j]!='\0';j++)
				printf("%c",ch[i][j]);
			printf("\n");*/
		}
		printf("%s\n",arr);
		/*printf("\n");*/
	return 0;
}
void fun(char ch[][20],int n)
{
	int i,j,k;
	char temp[20] = {0};
	for(i = 0;i<n-1;i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(strcmp(ch[j],ch[j+1])>0)
			{
				strcpy(temp,ch[j+1]);
				strcpy(ch[j+1],ch[j]);
				strcpy(ch[j],temp);
			}
		}
	}
}