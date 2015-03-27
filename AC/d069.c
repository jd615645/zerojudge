#include <stdio.h>

int main()
{
	int n,year,i;
	while(scanf("%d",&n) != EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&year);
			printf("%s\n",(year%4==0 && year%100!=0) || year%400==0 ?"a leap year":"a normal year");	
		}
	}
	return 0;
}
