#include <stdio.h>
int main()
{
	int k (int);
	int n,sum;
	printf("����һ����׳˵ĳ���,�����������������\n");
	scanf("%d",&n);
	sum=k(n);
	printf("%d",sum);
	return 0;
}
int k(int n)
{
	int sum=1;
	sum*=n;
	if (n>1)
	return sum*k(n-1);
	else
	return 1;
}
