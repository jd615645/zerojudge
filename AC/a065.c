#include <stdio.h>

int main()
{
	int num;
	
	while(scanf("%d",&num) != EOF)
	{
		printf("%d\n",num==0?1:0);
	}
	return 0;
}

