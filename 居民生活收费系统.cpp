#include <stdio.h>
void menu() ;
double ElecCost(double x);
double WaterCost (double x);
double GasCost (double x);
int main()
{
	 menu();
	return 0;
}
/**�˵�**/
void menu()
{
	int select;
	double x;
	while (1)
	{
		printf("  1-������\n  2-����ˮ��\n  3-����ȼ����\n  ����-�˳�������\n  ���������");
		scanf("%d",&select);
		if(select<1||select>3)
		{
			printf("�˳�����");
			break;
		}
		else{ 
		switch (select)
		{ 		
			case 1:
				printf("�����뵱���õ����:");
				scanf("%lf",&x);
				printf("%.2f\n",ElecCost(x)); 
				break;
			case 2:
				printf("�����뵱����ˮ��:");
				scanf("%.2lf",&x);
				printf("%f\n",WaterCost(x)); 
				break;
			case 3:
				printf("�����뵱��������:");
				scanf("%lf",&x);
				printf("%.2f\n",GasCost(x)); 
				break;
		} 
		} 
	}
}
double ElecCost(double x)
{
	double cost;
	if(x<=180)
		cost =x*0.56;
	else if(x<=260)
		cost=180*0.56+(x-180)*0.61;
	else
		cost=180*0.56+(260-180)*0.61+(x-260)*0.86;
		return cost;
}

double WaterCost (double x)
{
	double cost;
	if(x>0&&x<=15)
	cost =4*x/3;
	else
	cost=2.5*x-10.5;
	return cost;
}

double GasCost (double x)
{
	double cost;
	if(x>0&&x<=50)
	cost=1.89*x;
	else
	cost=1.89*50+2.29*(x-50);
	return 0;
}
