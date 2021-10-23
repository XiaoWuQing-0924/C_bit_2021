#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i = a; i>0; i--)
	{
		for(int j = 2; j<=i;j++)
		{
			if(j == i)
			{
				printf("The max prime number is %d.\n",i);
				return 0;
			}
			if(i%j == 0)
			{
				break;
			}
		}
	}
	return 0;
}

