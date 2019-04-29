#include <stdio.h>
int main()
{
	double end,length,x;
	int step;
	length=2.0;
	end=0;
	scanf("%lf",&x);
	for(step=0;end<=x;step++)
	{
		end+=length;
		length=length*0.98;
	}
	printf("%d\n",step);
	return 0;
}
