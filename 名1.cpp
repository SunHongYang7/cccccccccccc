#include<stdio.h>
#include<string.h>
int pd[10];
int main()
{
    memset(pd,0,sizeof(pd));
   int n;
   for(int a=100;a<400;a++)
   {
        memset(pd,0,sizeof(pd));

        pd[0]=1;
       int b=2*a,c=3*a;
       if (pd[a/100]==0)
        pd[a/100]=1;
       else continue;
       if (pd[(a%100)/10]==0)
        pd[(a%100)/10]=1;
       else continue;
       if (pd[(a%100)%10]==0)
        pd[(a%100)%10]=1;
       else continue;
      if (pd[b/100]==0)
        pd[b/100]=1;
       else continue;
       if (pd[(b%100)/10]==0)
        pd[(b%100)/10]=1;
       else continue;
       if (pd[(b%100)%10]==0)
        pd[(b%100)%10]=1;
       else continue;
       if (pd[c/100]==0)
        pd[c/100]=1;
       else continue;
        if (pd[(c%100)/10]==0)
        pd[(c%100)/10]=1;
       else continue;
       if (pd[(c%100)%10]==0)
        pd[(c%100)%10]=1;
       else continue;
       printf("%d %d %d\n",a,b,c);
       memset(pd,0,sizeof(pd));
   }
   return 0;
}
