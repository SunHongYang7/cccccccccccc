#include <stdio.h>
int main()
{
	double k (int);
	int m,n;
	double P;
	printf("这是一个求P=m!/(n!*(m-n)!),(ps:负数只有双阶乘，请确保输入的数值正数，且m>n)\n 请输入你想求的数(m n)：\n");
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
