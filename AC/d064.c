#include <stdio.h>

int main()
{
	int num;
	
	while(scanf("%d",&num) != EOF)
	{
		printf("%s\n",num%2!=0?"Odd":"Even");
	}
	return 0;
}

