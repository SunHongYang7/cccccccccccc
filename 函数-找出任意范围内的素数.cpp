#include <stdio.h>
int isprime(int i)   ;                       //�������� 
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	for(c=a;c<b+1;c++){
	if(isprime(c)==1)
		printf("%d����������\n",c);}
	 return 0;
}
int isprime(int i)                          //���庯��������һ�����ǲ�������// 
 {  int a;
 	int b=1;
 for( a=2;a<i;a++)
 if (i%a==0){
 	b=0;
 	break;
 }
 	return b;
 }
 
