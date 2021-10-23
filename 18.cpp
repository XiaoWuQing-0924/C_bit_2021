#include <stdio.h>
int main()
{
	int year,day,leapyear=0,i,whichday;
	scanf("%d",&year);
	for(i=1900;i<=year;i++)
	{
	   if((i%400==0)||((i%100!=0)&&(i%4==0)))leapyear+=1;/*找出1900年到目标年之间有几个闰年*/
    }
	day=(((year-1899)*365+leapyear)-(31+30+31+31+30+31+30+31))%7;/*计算从1900年1月1日（星期一）到目标年4月30日共有多少天，并且目标年4月30日为星期几*/
	if(day==7)whichday=14;
	else whichday=14-day;
	printf("%d",whichday);
	return 0;
}
