#include <stdio.h>

int main()
{
	int f;
	while(scanf("%d",&f) != EOF)
	{
		printf("%.3f\n",(5/9.0)*(f-32));
	}
		
	return 0;
}

