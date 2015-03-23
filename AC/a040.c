#include <stdio.h>
#include <math.h>

int main()
{
	int min,max,i;
	while(scanf("%d %d",&min,&max) != EOF)
	{
		int a=0;
		for(i=min;i<=max;i++)
		{
			
			int num=i,k=1,sum=0;
			
			while(num/=10)
			{
				k++;
			}
			
			num=i;
			while(num)
			{
				sum+=pow(num%10,k);
				num/=10;
			}
			if(sum==i)
			{
				printf("%d",i);
				printf("%s",(i!=max?" ":""));
				a++;
			}
		}

		printf("%s\n",(a!=0?"":"none"));
	}
    return 0;
}
