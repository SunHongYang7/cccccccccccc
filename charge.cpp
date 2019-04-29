#include <stdio.h>
int charge(int time1, int tour)
{
 
   int money=13;
    if(tour>3){
    if(time1>=23||time1<5)
    money+=(tour-3)*2;
    else
     money+=(tour-3);
                }
      return money;  
    }

int main()
{
    int time1=9;
    int time2=18;
    int tour=12;
    int money=charge(time1,tour)+charge(time2,tour);
    printf("一天打车费用为%d",charge);
    return 0;
}
