#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a, b, c,d,f;
	printf("�������������������ö��Ÿ���������1,2,3����");
	scanf("%d,%d,%d", &a, &b, &c);
	d= max(a,b);
    f= max(d,c);
	printf("���ֵ��%d\n",f);

	
	return 0;
}
int max(int x,int y)
{
	int z=0;
	if(x>y)
	   z=x; 
	else
	   z=y;
	return z;
}
