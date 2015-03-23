#include <stdio.h>

int main()
{
	int num;
	
	while(scanf("%d",&num) != EOF)
	{
		printf("%d\n",num>50?num-1:num);
	}
	return 0;
}

