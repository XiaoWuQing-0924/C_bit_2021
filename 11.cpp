#include <stdio.h>
int main()
{	
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
    	if(a==b&&a==c)
    	{
    		printf("equilateral triangle.\n");
		}
		else if(a==b||a==c||b==c)
    	{
    		printf("isoceles triangle.\n");
		}
		else
		{
			printf("triangle.\n");
		}
	}
	else
	{
		printf("non-triangle.\n");
	}
}
