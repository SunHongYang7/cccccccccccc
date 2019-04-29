#include <stdio.h>
int main()
{
	double Sn=0;
	int k,n;
	scanf("%d",&k);
	for(n=1;Sn<=k;n++)
	{
		Sn=Sn+1.0/n;
	} 
	 printf("%d\n",n-1);
	 return 0;
} 
