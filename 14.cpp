#include <stdio.h>
#include <math.h>
int main ()
{
	double x1;//x1,x2�ֱ�Ϊ���̵�2����
	double x2;
	double melt;
	int a;//��ʼ��ABC����������
	int b;
	int c;
	scanf("%d %d %d",&a, &b ,&c);//����ABC��ʱ����Ҫ�ո�
	melt = b*b - 4*a*c;//��ʼ��melt��ֵ
	
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
