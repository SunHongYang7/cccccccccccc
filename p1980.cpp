#include <stdio.h>
int main()
{
	int n, x=0;
	scanf("%d %d",&n,&x);
	for (int j = 0; j <= n; j++)
	{
		if (j / 1000000==x)
			x++;
		if (j / 100000==x)
			x++;
		if (j / 10000==x)
			x++;
		if (j / 1000== x)
			x++;
		if (j / 100 ==x)
			x++;
		if (j / 10 ==x)
			x++;
		if (j / 1 ==x)
			x++;
	}
	printf("%d", x);
	return 0;
}
