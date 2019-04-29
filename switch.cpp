#include <stdio.h> 
int main ()
{
	int count=0;
	scanf("%d",count);
	switch (count){
	case 1:printf("早上好"); 
	break;
	case 2:printf("上午好");
	break;
	case 3:printf("中午好");
	break;
	case 4:printf("晚上好");
	break;
	default:printf("再见");
	break;}
	return 0;
}
