#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<2*(n-i);j++)
		{
			printf(" ");
		}
		int temp =n;
		for(int j=0;j<i;j++)
		{
			if(temp>9)
			{
				printf("%d",temp--);
			}
			else
			{
				printf("%d ",temp--);
			}
		}
		temp = temp+2;
		for(int z=0;z<i-1;z++)
		{
			if(temp>9)
			{
				printf("%d",temp++);
			}
			else
			{
				printf("%d ",temp++);
			}
		}
		printf("\n");
		
	}
	for(int f=n-1;f>0;f--)
	{
		for(int z =1;z<=2*(n-f);z++)
		{
			printf(" ");
		}
		int temp = n;
		for(int j=f;j>0;j--)
		{
			if(temp>9)
			{
				printf("%d",temp--);
			}
			else
			{
				printf("%d ",temp--);
			}
		}
		temp = temp+2;
		for(int j=f;j>1;j--)
		{
			if(temp>9)
			{
				printf("%d",temp++);
			}
			else
			{
				printf("%d ",temp++);
			}
		}
		printf("\n");
	}


	return 0;
}

