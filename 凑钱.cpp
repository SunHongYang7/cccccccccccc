#include <stdio.h>
int main()
{int a;
 int one ,two,three;
 scanf("%d",&a);
 for(one=1;one<a*10;one++){
 	for(two=1;two<a*10/2;two++){
 		for(three=1;three<a*10/5;three++)
 		if(one+two*2+three*5 == a*10){
 			printf("������%d��һ�Ǽ�%d���Ǽ�%d����ǵõ�%dԪ\n",one,two,three,a);
		 }
	 }
 }
 return 0;
}
