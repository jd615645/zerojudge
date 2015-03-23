#include <stdio.h>

int main()
{
	int year;
	
	while(scanf("%d",&year) != EOF)
	{
		printf("%s\n",((year%4==0 && year%100!=0) || (year%400==0))?"a leap year":"a normal year");
	}
	return 0;
}

