#include <stdio.h>
#include <math.h>
int main()
{
	char x[20];
	int first_num = 0;//��һ������ 
	int second_num = 0;//�ڶ������� 
	int second_num_h;//�ڶ������ֵĸ�λ 
	int second_num_l;//�ڶ������ֵĵ�λ
	int resust = 0;
	scanf("%s",x);
	for(int i =0;x[i]!='\0';i++)
	{
		if(x[i]<48||x[i]>57)
		{
			for(int j = 0;j<i;j++)
			{
				first_num += (x[j]-48)*pow(10,i-j-1);//���������һ������ÿλ�ϵ����ֲ��ۼ� 
			}
			second_num_h = i+1;	//�������ź�һλ��Ϊ�ڶ������ֵĸ�λ 
		}
		second_num_l=i;//���һλ�� �������ֵĵ�λ
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
