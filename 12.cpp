#include <stdio.h>
int main()
{
	int a,b;//a:Сʱ����b:������
	float t1,t2,ans;//t1��ʱ��ĽǶȣ�t2������ĽǶȣ�ans���н�
	scanf("%d%d",&a,&b);
	t2=(float)b*6;
	t1=a*30+(float)b*0.5;
	ans=t1-t2;
	if(ans<0)
	{
		ans = -ans;
	}
	if(ans>180)
	{
	 ans=360-ans;//���нǴ���180�㣬ȡС��
	}
	printf("At %d:%02d the angle is %.1f degrees.\n",a,b,ans);
	return 0;
}

