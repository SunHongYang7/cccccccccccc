#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr1[6];
 	gets(arr1 );
	char arr2[6];
	for (int n=5;n>=0;n--)
	{
		arr2[n] = arr1[(5 - n)];
		printf("%c",arr2[n]);
	}
	printf("%s\n", arr2);
	system ("pause");
}
