#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		printf("%d\n",n%3==0?n/3:n/3+1);
	}
	return 0;
}
