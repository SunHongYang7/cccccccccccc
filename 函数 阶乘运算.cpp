#include <stdio.h>
int main()
{
	double k (int);
	int m,n;
	double P;
	printf("����һ����P=m!/(n!*(m-n)!),(ps:����ֻ��˫�׳ˣ���ȷ���������ֵ��������m>n)\n ���������������(m n)��\n");
	scanf("%d %d",&m,&n);
	P=k(m)/(k(n)*k(m-n));
	printf("%f",P);
	return 0;
}
double k(int n)
{
	double sum=1;
	sum*=n;
	if (n>1)
	return sum*k(n-1);
	else
	return 1;
}
