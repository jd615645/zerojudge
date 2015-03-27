#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		printf("%d\n",n-15>=0?n-15:n+9);
	}
		
	return 0;
}

