#include <stdio.h>
int main()
{
	float fun(double);
	double h;
	float a;
	printf("请输入一个小数，小数位数大于2\n");
	scanf("%lf",&h); 
	a=fun(h);
	printf("%.2f",a);
	return 0;
}
float fun(double h)
{
	int a;
	float c;
	if(h*100/10>4)
		h+=0.01;
		printf("%f  ",h);
		a=h*100;
		printf("%d  ",a);
		
		c=a/100;
		printf("%f  ",h);
	return h;
}
