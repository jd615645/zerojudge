#include <stdio.h>

int main()
{
	double n;
	while(scanf("%lf",&n) != EOF)
	{
		printf("|%.4lf|=%.4lf\n",n,(n<0?n*-1:n));
	}
		
	return 0;
}

