#include <stdio.h>
int main()
{
	int i,n;
	int sum=1;
	scanf("%d",&n);
	if(n==1)
	{
		printf("The monkey got %d peache in first day.\n",sum);
		return 0;
	}
	for(i=n-1;i>0;i--)
	{
		sum=(sum+i)*2;
	}
	printf("The monkey got %d peaches in first day.\n",sum);
	return 0;
}

