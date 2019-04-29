#include <stdio.h>
#include <windows.h>
int main(void)
{
    int time=10;
    int i;
    for(i=1;i<=11;i++)
    { printf("1");
    Sleep(i*1000);
    printf("0");
    Sleep((11-i)*1000);
    }
    return 0;
}

