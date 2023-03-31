#include<stdio.h>
#include<string.h>//奥运会入场
void fun(char ch[][20],int n);
int main()
{
	char ch[200][20] = {0};
	char arr[] = {'C','h','i','n','a','\0'};
	int n,i;
	scanf("%d",&n);
	getchar();
	for(i = 0;i<n;i++)
	{
		scanf("%s",ch[i]);
	}
	fun(ch,n);
	for(i = 0;i<n;i++)
	{
		if(strcmp(ch[i],"China"))
		{
			printf("%s\n",ch[i]);
		}
	}
	printf("%s\n",arr);
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

//#include<stdio.h>//西天取经
//int main()
//{
//	long n,k,i,j,sum,max;
//	long ch[100][100] = {0};
//	while((scanf("%ld",&n))!=EOF)
//	{
//		sum = 0;
//		for(i = 0;i<n;i++)
//		{
//			scanf("%ld",&k);
//			for(j = 0;j<k;j++)
//				scanf("%ld",&ch[i][j]);
//			max = ch[i][0];
//			for(j = 0;j<k;j++)
//			{
//				if(ch[i][j]>=max)
//					max = ch[i][j];
//			}
//			sum = sum+max;
//		}
//		printf("%ld\n",sum);
//	}
//	return 0;
//}
//#include<stdio.h>//青奥入场
//#include<string.h>
//void fun(char ch[][200],int n);
//int main()
//{
//	char ch[200][200] = {0};
//	char arr[] = {'C','h','i','n','a','\0'};
//	/*char ch1[200] = {0};
//	char ch2[200] = {0};*/
//	int n,j,i,k,h,flag,temp,f;
//	scanf("%d",&n);
//	getchar();
//	for(i = 0;i<n;i++)
//	{
//		j = 0;
//		flag = 0;
//		while((ch[i][j++] = getchar())!='\n');
//		ch[i][j] = '\0';
//		/*ch1[i] = ch[i][0];
//		ch2[i] = ch[i][1];*/
//		for(k = 0;k<2;k++)
//		{
//			temp = ch[i][0];
//			for(h = 0;h<j-1;h++)
//				ch[i][h] = ch[i][h+1];
//			ch[i][j] = temp;
//		}
//	}
//	fun(ch,n);
//	for(i = 0;i<n;i++)
//	{
//		for(h = 0;h<5;h++)
//		{
//			if(ch[i][h]==arr[h])
//				flag = 0;
//			else
//				flag = 1;
//		}
//		if(flag==0)
//			k = i;
//	}
//	for(i = 0;i<n;i++)
//	{
//		h = strlen(ch[i]);
//		for(j = 0;j<2;j++)
//		{
//			temp = ch[i][h];
//			for(f = 0;f<h-1;f++)
//				ch[i][f+1] = ch[i][f];
//			ch[i][0] = temp;
//		}
//	}
//	for(i = 0;i<n;i++)
//	{
//		if(i!=k)
//		{
//			/*printf("%c%c",ch1[i],ch2[i]);*/
//			for(j = 0;(ch[i][j])!='\0';j++)
//				printf("%c",ch[i][j]);
//		}
//	}
//	/*printf("%c%c",ch1[k],ch2[k]);*/
//	for(j = 0;(ch[k][j])!='\0';j++)
//		printf("%c",ch[k][j]);
//	return 0;
//}
//void fun(char ch[][200],int n)
//{
//	int i,j;
//	char temp[200] = {0};
//	for(i = 0;i<n-1;i++)
//	{
//		for(j = 0;j<n-i-1;j++)
//		{
//			if(strcmp(ch[i],ch[i+1])>0)
//			{
//				strcpy(temp,ch[i]);
//				strcpy(ch[i],ch[i+1]);
//				strcpy(ch[i+1],temp);
//			}
//		}
//	}
//}
//#include<stdio.h>//约瑟夫问题
//int main()
//{
//	int n,m,i,j,count;
//	while((scanf("%d%d",&n,&m))!=EOF)
//	{
//		int ch[10000] = {0};
//		count = 0;
//		j = 0;
//		i = 0 ;
//		while(count<n)
//		{
//			if(ch[i]==0&&j==m-1)
//			{
//				j = -1;
//				count++;
//				ch[i] = 1;
//				printf("%d ",i+1);
//			}
//			i = (i+1)%(n);
//			j = j+1-ch[i];
//		}
//		printf("\n");
//	}
//	return 0;
//}