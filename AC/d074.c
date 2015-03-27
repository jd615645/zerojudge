#include <stdio.h>

int main()
{
	int n,i,max,num;
	while(scanf("%d",&n) != EOF)
	{
		max=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&num);
			if(num>max) max=num;
		}
		printf("%d\n",max);
	}
	return 0;
}
