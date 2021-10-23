#include <stdio.h>
#include <math.h>
int main ()
{
	double x1;//x1,x2分别为方程的2个解
	double x2;
	double melt;
	int a;//初始化ABC的三个变量
	int b;
	int c;
	scanf("%d %d %d",&a, &b ,&c);//输入ABC的时候需要空格
	melt = b*b - 4*a*c;//初始化melt的值
	
	if(a==0&&b!=0)
	{
		if(c==0)
		{
			double x =0;
			printf("x=%lf\n", x);
		}
		else
		{
			double x= -(double)c/(double)b;
			printf("x=%lf\n", x);
		}		
	}
	else if(a==0&&b==0)
	{
		printf("Input error!\n");
	}
	else 
	{
		if (melt>0)
		{	
			x1=(-b + sqrt(melt))/(2*a);
			x2=(-b - sqrt(melt))/(2*a);
			printf ("x1=%lf\nx2=%lf\n",x1,x2);
		}
		else if (melt==0)
		{
			x1 = (-b )/(2*a);
			x2 = x1;
			printf("x1=x2=%lf\n",x1);
		}
		else
		{
			double x1_real= (double)(-b)/(double)(2*a);
			double x1_imag= sqrt(-melt)/(2*a);

			double x2_real= (double)(-b)/(double)(2*a);
			double x2_imag= sqrt(-melt)/(2 *a);
			if(x1_real == 0)
			{
				printf("x1=%lfi\n",x1_imag);
				printf("x2=-%lfi\n",x2_imag);
			}
			else
			{
				printf("x1=%lf+%lfi\n",x1_real,x1_imag);
				printf("x2=%lf-%lfi\n",x2_real,x2_imag);
			}
		}
	}
}
