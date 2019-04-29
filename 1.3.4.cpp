#include <stdio.h>
int main()
{
    long  c,x,n;
	scanf("%ld %ld",&x,&n);
	for(x=x;n>0;x++)
	{
		if(x!=6&&x!=7)
		c+=250;
		if(x==7)
		x=0;
		n--;
	 } 
	printf("%ld\n",c);
	return 0;
 } 
