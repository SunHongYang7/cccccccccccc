/*ֻ�ܽ��мӼ��˳������������ȼ������貹ȫ
version0.02
*/

#include <stdio.h>
int main()
{
int a,b,answer ;
char x,y;//x�������������
scanf("%d%c",&a,&x);
while(x!='=')
    {
        scanf("%d%c",&b,&y);
        switch(x)
        {
        case '+':answer=a+b;break;
        case '-':answer=a-b;break;
        case '*':answer=a*b;break;
        case '/':answer=a/b;break;
        }
    a=answer;
    x=y;
    }
    printf("answer=%d",answer);
    return 0;
} 
