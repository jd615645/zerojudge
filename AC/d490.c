#include <stdio.h>

int main()
{
	int i,a,b;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		long long int tot=0;
		for(i=a;i<=b;i++)
		{
			if(i%2==0)
			{
				tot+=i;
			}
		}
        printf("%lld\n",tot);
	}
	return 0;
}

