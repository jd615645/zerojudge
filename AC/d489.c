#include <stdio.h>

int main()
{
	int s,a,b,c;
	while(scanf("%d %d %d", &a,&b,&c) != EOF)
	{
		s=(a+b+c)/2;
		printf("%d\n",s*(s-a)*(s-b)*(s-c));		
	}
	return 0;
}
