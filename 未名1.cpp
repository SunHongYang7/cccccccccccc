#include <stdio.h>
int main()
{
	int u=0;
	int num1,num2,num3;
	int a[8]; 
		for ( a[0]=1;a[0]<10;a[0]++)
		{	for ( a[1]=1;a[1]<10;a[1]++)
			{
				for ( a[2]=1;a[2]<10;a[2]++)
				{
						for ( a[3]=1;a[3]<10;a[3]++)
						{ 
							for ( a[4]=1;a[4]<10;a[4]++)
							{ 
								for ( a[5]=1;a[5]<10;a[5]++)
								{ 
									for ( a[6]=1;a[6]<10;a[6]++)
										{ 
											for ( a[7]=1;a[7]<10;a[7]++)
											{ 
												for ( a[8]=1;a[8]<10;a[8]++)
												{
													num1=a[0]*100+a[1]*10+a[2];
													num2=a[3]*100+a[4]*10+a[5];
													num3=a[6]*100+a[7]*10+a[8];
													if(num2==2*num1&&num3==3*num1)
													{
														for(int i=1;i<9;i++)
														{
															for(int j=i;j<9;j++)
															 {
															 	if(a[i]==a[j])
																 u==1 ;
															}
														}
														if(u==0)
														printf("%d %d %d\n",num1,num2,num3);
														u=0;
													} 
												}
											}
										}
									}
								}
							}
						}
					}
				}
												 
												return 0;
}
 
