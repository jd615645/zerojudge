#include <stdio.h>

int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!= EOF)
	{
		int time=1,tot=n;
		while(1)
		{
			if(tot>m) break;
			n++;
			tot+=n;
			time++;
		}
		printf("%d\n",time);
	}
    return 0;
}
