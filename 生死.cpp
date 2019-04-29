#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, key, temp;
	srand((unsigned)time(NULL));
	key = 1+rand() /32767;
	printf("猜枪内有没有子弹，1有，0没有，这决定生死\n");

		printf("请输入你猜的数");
		scanf("%d", &temp);
		if (1 == key&&temp==key)
		{
			printf("生1");
		}
		if(key==0)
			printf("生2");
		if(key==1&&temp!=key) 
			printf("死");
	
	return 0;
}
