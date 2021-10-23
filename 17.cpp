#include <stdio.h>
#include <math.h>
int main()
{
	char x[20];
	int first_num = 0;//第一个数字 
	int second_num = 0;//第二个数字 
	int second_num_h;//第二个数字的高位 
	int second_num_l;//第二个数字的低位
	int resust = 0;
	scanf("%s",x);
	for(int i =0;x[i]!='\0';i++)
	{
		if(x[i]<48||x[i]>57)
		{
			for(int j = 0;j<i;j++)
			{
				first_num += (x[j]-48)*pow(10,i-j-1);//便利求出第一个数字每位上的数字并累加 
			}
			second_num_h = i+1;	//操作符号后一位即为第二个数字的高位 
		}
		second_num_l=i;//最后一位是 二个数字的低位
	}
	for(int z = 0;z<=second_num_l-second_num_h;z++)
	{
		second_num += (x[second_num_h+z]-48)*pow(10,second_num_l-second_num_h-z);
	}
	switch(x[second_num_h-1])
	{
		case '+':resust=first_num+second_num;break;
		case '-':resust=first_num-second_num;break;
		case '*':resust=first_num*second_num;break;
		case '/':resust=first_num/second_num;break;
		case '%':resust=first_num%second_num;break;
	}
	printf("%d\n",resust);
	return 0;
}
