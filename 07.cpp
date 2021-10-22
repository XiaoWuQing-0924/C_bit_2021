#include <stdio.h>
#define PI 3.1415926
 int main()
 {
 	double r = 0;
 	double h = 0;
 	scanf("%lf", &r);
 	scanf("%lf", &h);
 	double v =PI*r*r*h;
 	double s =2*PI*r*h;
 	printf("s=%.2f,v=%.2f\n",s,v);
 	return 0;
	
  } 
