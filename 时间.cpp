#include <Stdio.h>
int main()
{
	struct date{
		int month;
		int day;
		int year;
	}; 
	struct date today;
	today.month=11;
	today.day=18;
	today.year=2018;
	printf("today's date is %i-%i-%i\n",today.year,today.month,today.day);
	return 0;
	
}
