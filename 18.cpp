#include <stdio.h>
int main()
{
	int year,day,leapyear=0,i,whichday;
	scanf("%d",&year);
	for(i=1900;i<=year;i++)
	{
	   if((i%400==0)||((i%100!=0)&&(i%4==0)))leapyear+=1;/*�ҳ�1900�굽Ŀ����֮���м�������*/
    }
	day=(((year-1899)*365+leapyear)-(31+30+31+31+30+31+30+31))%7;/*�����1900��1��1�գ�����һ����Ŀ����4��30�չ��ж����죬����Ŀ����4��30��Ϊ���ڼ�*/
	if(day==7)whichday=14;
	else whichday=14-day;
	printf("%d",whichday);
	return 0;
}
