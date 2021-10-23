#include <stdio.h>
int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	if(month==2)
	{
		if((year%400==0)||((year%100!=0)&&(year%4==0)))
		{
			if(day>29)
			{
				printf("day is error.\n");
				return 0;
			}
		}
		else
		{
			if(day>28)
			{
				printf("day is error.\n");
				return 0;
			}
		}

	}
	else if(month ==1 ||month ==3 ||month ==5 ||month ==7 ||month ==8 ||month ==10 ||month ==12)
	{
		if(day>31)
			{
				printf("day is error.\n");
				return 0;
			}
	}
	else if(month ==4 ||month ==6 ||month ==9 ||month ==11)
	{
		if(day>30)
			{
				printf("day is error.\n");
				return 0;
			}
	}
	else
	{
		printf("month is error.\n");
		return 0;
	}
	if (1 == month || 2 == month) //为了方便使用 基姆拉尔森计算公式
    {   
        month += 12; 
        year--;
    } 
	int iweekDay;
	iweekDay = (day + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	printf("%d\n",iweekDay);
	return 0;
}

