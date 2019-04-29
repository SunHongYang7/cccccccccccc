#include <stdio.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(i%2==0&&j%2==0)
       sum+=arr[i][i];
        }
       
       
       
       
    }
    sum+=arr[1][1];
    printf("对角线元素之和是：%d\n",sum);
    return 0;    
}
//1 2 3
//4 5 6
//7 8 9
