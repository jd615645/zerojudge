#include <stdio.h>

int main()
{
    int n,i;
	while(scanf("%d",&n) != EOF)
    {
    	int sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0) sum+=i;
		}
		
		if(sum>n)
		{
			printf("盈數\n");
		}
		else if(sum<n)
		{
			printf("虧數\n");
		}
		else
		{
			printf("完全數\n");
		}
    }
    return 0;
}
