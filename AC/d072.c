#include <stdio.h>

int main()
{
	int n,year,i,num=1;
	while(scanf("%d",&n) != EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&year);
			printf("Case %d: %s\n",num++,(year%4==0 && year%100!=0) || year%400==0 ?"a leap year":"a normal year");
		}
	}
	return 0;
}
