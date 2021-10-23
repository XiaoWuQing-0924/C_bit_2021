#include <stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	for(int i=0;i<10000;i++)
	{
		sum = sum+i;
		if(sum>=n)
		{
			printf("%d\n",i);
			return 0;
		 } 
	}

	return 0;
}

