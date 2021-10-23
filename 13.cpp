#include <stdio.h>
int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int iweekDay;
	if (1 == month || 2 == month) 
    {   
        month += 12; 
        year--;
    }  
	iweekDay = (day + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	printf("%d\n",iweekDay);
	return 0;
}

