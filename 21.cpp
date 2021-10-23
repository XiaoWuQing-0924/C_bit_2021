#include <stdio.h>
int main()
{
	char c[30];
	scanf("%s",c);
	int num[10]={1};
	char op;
	int max,min;
	for(int i=0;c[i]!='\0';i++)
	{
		if((c[i]=='+')||(c[i]=='-')||(c[i]=='*')||(c[i]=='/')||(c[i]=='%'))
		{
			op = c[i];
		}
		if(c[i]<='9'&&c[i]>='0')
		{
			num[c[i]-'0']=c[i]-'0';
		}
	}
	for(int i =9;i>=0;i--)
	{
		if(num[i]==i)
		{
			max=num[i];
			break;
		}
		
	}
	for(int i =0;i<=9;i++)
	{
		if(num[i]==i)
		{
			min=num[i];
			break;
		}
	}
	switch(op)
	{
		case '+':{
			printf("%d+%d=%d\n",max,min,max+min);
			break;
		}
		case '-':{
			printf("%d-%d=%d\n",max,min,max-min);
			break;
		}	
		case '*':{
			printf("%d*%d=%d\n",max,min,max*min);
			break;
		}	
		case '/':{
			if(min==0)
			{
				printf("Error!\n");
				break;
			}
			printf("%d/%d=%d\n",max,min,max/min);
			break;
		}
		case '%':{
			if(min==0)
			{
				printf("Error!\n");
			}
			printf("%d\%%%d=%d\n",max,min,max%min);
			break;
		}
	}
	//c = getchar();
	return 0;
}

