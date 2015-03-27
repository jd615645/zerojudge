#include <stdio.h>

int main()
{
	int time;
	while(scanf("%d",&time) != EOF)
	{
		printf("%d\n",(85-time)%60);
	}
	return 0;
}
