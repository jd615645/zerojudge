#include <stdio.h>

int main()
{
	int num[3],i;
	
	while(scanf("%d %d %d",&num[0],&num[1],&num[2]) != EOF)
	{
		int max=0;
		for(i=0;i<=2;i++)
		{
			if(max<num[i]) max=num[i];
		}
		printf("%d\n",max);
	}
	return 0;
}

