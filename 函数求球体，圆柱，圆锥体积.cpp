#include <stdio.h>
#define PI 3.14
void menu();
float vol_ball(int);
float vol_cylind(int,int);
float vol_cone(int,int);
int main ()
{
	menu();
	return 0;
 } 
 void menu()
 {
 	int t;
 	float r,h;
 	while(1)
 	{
 		printf("  1-����������\n  2-��Բ��������\n  3-��Բ׶�����\n  ����-�˳�����\n  ���������"); 
 		scanf("%d",&t);
 		if(t<1||t>3)
 		{
 			printf("���˳�����");
			break;
		}
 		switch (t)
 		{
 			case 1 :
 				printf("������뾶��"); 
				 scanf("%f",&r);
				 printf("%f\n",vol_ball(r));
				 break ;
			case 2:
				printf("������뾶�͸߶�");
				scanf("%f %f",&r,&h);
				printf("%f\n",vol_cylind(r,h));
				break;
			case 3:
				printf("������뾶�͸߶�");
				scanf("%f %f");
				printf("%f\n",vol_cone(r,h));
				break;		 
		 }
		 
	 }
 }
float vol_ball(int r)
{
	float vol;
	vol=4*PI*r*r*r/3;
	return vol;
 } 
float vol_cylind(int r ,int h)
{
	float vol;
	vol=h*PI*r*r;
	return vol;
}
float vol_cone(int r,int h)
{
	float vol;
	vol=h*PI*r*r/3.0;
	return vol;
}
