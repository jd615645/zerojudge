#include <stdio.h>

int main()
{
	int n,i,j,num,fib[39];
	
	fib[0]=1;
	fib[1]=2;
	
	for(i=2;i<39;i++)
		fib[i]=fib[i-1]+fib[i-2];
	
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&num);
		printf("%d = ",num);
		int begin=0;
		for(j=38 ; j>=0 ; j--)
		{
			if((num/fib[j]) == 1)
			{
				printf("1");
				num -= fib[j];
				begin = 1;
			}
			else if(begin && (num/fib[j]) == 0)
			{
				printf("0");
			}
		}
		printf(" (fib)\n");
	}
	
	return 0;
}
