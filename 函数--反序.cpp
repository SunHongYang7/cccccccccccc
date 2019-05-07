/****
name:函数--逆序
Finish time:2019.5.5----5.9
出现的问题：第31行取数组地址的时候取得是a[i+1]的地址，导致换的时候不是固定的那几个数，而是每次往前加一。 
*****/
#include <stdio.h>
int main()
{
	void reback (int,int*,int);
	int a[100]={0};
	int n,i;
		printf("请输入数的个数，及其内容");
	scanf("%d",&n);
	for( i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	
	reback(0,&a[0],n);
	for( i=0;i<n;i++)
		printf("%d  ",a[i]);
	return 0;
}


void reback(int i,int a[],int n )
{
	int t=a[i];
	a[i]=a[n-1-i];
	a[n-1-i]=t;
	if(i<(n-2-i))
		reback(i+1,&a[i],n);
}
