#include<stdio.h>//开灯问题
int main()
{
	int n,k,i,j;
	while((scanf("%d%d",&n,&k))!=EOF)
	{
		int ch[10005] = {0};
	for(i = 1;i<=k;i++)
		{
			for(j = 1;i*j<=n;j++)
			{
			ch[i*j] = !ch[i*j];
			}
	}
	for(i = 1;i<=n;i++)
	{
		if(ch[i]==1)
			printf("%d\n",i);
	}
	}
return 0;
}
//#include<stdio.h>//选票统计
//int main()
//{
//	int ch1[1001] = {0};
//	int ch2[100000]={0};
//	int i,j,k,h,num;
//	for(i = 0;i<1001;i++)
//		ch1[i] = i+1;
//	j = 0;
//	i = 0;
//	while(1)
//	{
//	scanf("%d",&ch2[i]);
//	if(ch2[i]!=-1)
//		i++;
//	else
//		break;
//	}
//	k = i;
//	for(i = 0;i<k;i++)
//		{
//			if(ch2[i]>j)
//			j = ch2[i];
//	}
//	for(i = 0;ch1[i]<=j;i++)
//	{
//		num = 0;
//	for(h = 0;h<k;h++)
//		{
//			if(ch1[i]==ch2[h])
//				num++;
//	}
//	
//	if(num!=0)
//		printf("%d %d\n",ch1[i],num);
//	}
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch[11][11] = {0};
//	int n,i,j,k;
//	k = 1;
//	scanf("%d",&n);
//	for(i = 0;i<n;i++)
//		{
//			for(j = 0;j<n;j++,k++)
//				ch[i][j] = k;
//	}
//	for(i = 0;i<=n;i++)
//	{
//		for(j = 0;j<n;j++)
//			ch[j][n-1-i] = ch[i][j];
//	}
//	for(i = 0;i<n;i++)
//		{
//			for(j = 0;j<n;j++)
//				printf("%d ",ch[i][j]);
//			printf("\n");
//	}
//	return 0;
//}
