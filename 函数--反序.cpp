/****
name:����--����
Finish time:2019.5.5----5.9
���ֵ����⣺��31��ȡ�����ַ��ʱ��ȡ����a[i+1]�ĵ�ַ�����»���ʱ���ǹ̶����Ǽ�����������ÿ����ǰ��һ�� 
*****/
#include <stdio.h>
int main()
{
	void reback (int,int*,int);
	int a[100]={0};
	int n,i;
		printf("���������ĸ�������������");
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
