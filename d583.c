#include <stdio.h>

int main()
{
	int n,num[1000000],i,j,temp;
	while(scanf("%d",&n) != EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(num[i]>num[j])
				{
					temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
			
			if(i!=n-1)
			{
				printf("%d ",num[i]);
			}
			else
			{
				printf("%d\n",num[i]);
			}			
		}
	}
	return 0;
}
