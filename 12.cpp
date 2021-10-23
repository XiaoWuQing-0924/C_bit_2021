#include <stdio.h>
int main()
{
	int a,b;//a:小时数，b:分钟数
	float t1,t2,ans;//t1：时针的角度，t2：分针的角度，ans：夹角
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
	 ans=360-ans;//若夹角大于180°，取小角
	}
	printf("At %d:%02d the angle is %.1f degrees.\n",a,b,ans);
	return 0;
}

