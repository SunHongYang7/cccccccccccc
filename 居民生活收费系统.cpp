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
/**菜单**/
void menu()
{
	int select;
	double x;
	while (1)
	{
		printf("  1-计算电费\n  2-计算水费\n  3-计算燃气费\n  其他-退出本程序\n  请输入命令：");
		scanf("%d",&select);
		if(select<1||select>3)
		{
			printf("退出程序");
			break;
		}
		else{ 
		switch (select)
		{ 		
			case 1:
				printf("请输入当月用电度数:");
				scanf("%lf",&x);
				printf("%.2f\n",ElecCost(x)); 
				break;
			case 2:
				printf("请输入当月用水量:");
				scanf("%.2lf",&x);
				printf("%f\n",WaterCost(x)); 
				break;
			case 3:
				printf("请输入当月用气数:");
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
