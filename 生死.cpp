#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, key, temp;
	srand((unsigned)time(NULL));
	key = 1+rand() /32767;
	printf("��ǹ����û���ӵ���1�У�0û�У����������\n");

		printf("��������µ���");
		scanf("%d", &temp);
		if (1 == key&&temp==key)
		{
			printf("��1");
		}
		if(key==0)
			printf("��2");
		if(key==1&&temp!=key) 
			printf("��");
	
	return 0;
}
