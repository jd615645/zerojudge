#include <stdio.h>

int main()
{
	int in,i;
	int year[10001]={1,1};
	for(i=2;i<=10000;i++)
	{
		year[i]=(year[i-1]+year[i-2])%2012;
	}
	while(scanf("%d",&in) != EOF)
	{
		printf("%d\n",year[in]);
	}
	return 0;
}
