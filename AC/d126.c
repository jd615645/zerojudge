#include <stdio.h>

int main()
{
	int w,h;
	while(scanf("%d %d",&w,&h) != EOF)
	{
		printf("%d\n",w*2+h*2);
	}
		
	return 0;
}

