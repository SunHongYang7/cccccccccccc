#include <stdio.h>
int main ()
{
	int a[100][100]={0};
	int n,j,i,k=1,p;
	scanf("%d",&n);
	if(n%2!=0)						//奇数幻方 
	{
		j=n/2;
		i=0; 
		for(k=1;k<=n*n;k++)
		{
			a[i][j]=k;
			if(k%n==0)
			{
				i++;
			}
			else
			{
				i=i-1;
				j=j+1;
			}
			if(j>=n)
				j=0;
			if(i>=n)
				i=0;
			if(j<0)
				j=n-1;
			if(i<0)
				i=n-1;

				
		}
	}
	if(n%4==0)						//双偶幻方   4m 
	{
		i=0;j=0;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				if(((i%4==0||i%4==3)&&(j%4==1||j%4==2))||(i%4==1||i%4==2)&&(j%4==0||j%4==3))		//分成 m*m个4阶方阵；除每个对角线其他数按顺序填入 
					a[i][j]=k;
				else
					a[i][j]=n*n+1-k;																//对角线倒序填入 
				k++;
			}
		} 
	}
	if(n%4==2)						//单偶方阵 4m+2 
	{
		int t=(n-2)/4;
		i=0;
		j=n/4;
		for(k=1;k<=n*n;k++)
		{
			a[i][j]=k;
			
			//A部分
			if(k<=n*n/4) 
			{
				if(k%(n/2)==0)
				{
					i++;
				}
				else
				{
					i--;
					j++;
				}
				if(j>=(n/2))
					j=0;
				if(i>=(n/2))
					i=0;
				if(j<0)
					j=n/2-1;
				if(i<0)
					i=n/2-1;
			}
		
			//D部分 
			if(k==n*n/4)				
			{
				i=n/2;
				j=n/2+n/4;
			}
			if(k>n*n/4&&k<=n*n/2)
			{
				a[i][j]=k;
				if(k%(n/2)==0)
				{
					i++;
				}
				else
				{
					i=i-1;
					j=j+1;
				}
				if(j>=n)
					j=n/2;
				if(i>=n)
					i=n/2;
				if(j<n/2)
					j=n-1;
				if(i<n/2)
					i=n-1;
			}
			//B部分 
			if(k==n*n/2)			
			{
				i=0;
				j=n/2+n/4;
			}
			if(k>n*n/2&&k<=3*n*n/4)
			{
				a[i][j]=k;
				if(k%(n/2)==0)
				{
					i++;
				}
				else
				{
					i=i-1;
					j=j+1;
				}
				if(j>=n)
					j=n/2;
				if(i>=n/2)
					i=0;
				if(j<n/2)
					j=n-1;
				if(i<0)
					i=n/2-1;
			}
			//c部分
			if(k==3*n*n/4)			
			{
				j=n/4;
				i=n/2;
			}
			if(k>3*n*n/4)
			{
				a[i][j]=k;
				if(k%(n/2)==0)
				{
					i++;
				}
				else
				{
					i=i-1;
					j=j+1;
				}
				if(i>=n)
					i=n/2;
				if(j>=n/2)
					j=0;
				if(j<0)
					j=n/2-1;
				if(i<n/2)
					i=n-1;
			} 
		
		}
		for(i=n/4,j=n/4;j<(n/4+k);j++)
		{
			p=a[i][j];
			a[i][j]=a[i+(n/2)][j];
			a[i+(n/2)][j]=p;
		 }
		 for(i=0;i<n/2;i++)
		 {
		 	if(i==(n/4))
		 		continue;
		 	for(j=0;j<t;j++)
		 	{
		 		p=a[i][j];
		 		a[i][j]=a[i+(n/2)][j];
		 		a[i+(n/2)][j]=p;
			 }
		  } 
		  for(i=0;i<n/2;i++)
		  {
		  		for(j=(n/2)+(n/4);j>(n/2)+(n/4)-t+1;j--)
				p=a[i][j];
				a[i][j]=a[i+n/2][j];
				a[i+n/2][j]=p;
			}
	}
	for(i=0;i<n;i++)			//输出 
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}
