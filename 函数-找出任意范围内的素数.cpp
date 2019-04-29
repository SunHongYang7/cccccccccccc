#include <stdio.h>
int isprime(int i)   ;                       //声明函数 
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	for(c=a;c<b+1;c++){
	if(isprime(c)==1)
		printf("%d不是素数。\n",c);}
	 return 0;
}
int isprime(int i)                          //定义函数，检验一个数是不是素数// 
 {  int a;
 	int b=1;
 for( a=2;a<i;a++)
 if (i%a==0){
 	b=0;
 	break;
 }
 	return b;
 }
 
