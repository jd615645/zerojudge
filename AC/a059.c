#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,a,b,n,tot;
	
	while(scanf("%d",&n) != EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&a,&b);
			for(j=a,tot=0;j<=b;j++)
			{
				if((int)sqrt(j)==sqrt(j)) tot+=j;
			}
			printf("Case %d: %d\n",i,tot);
		}
	}

	return 0;
}
