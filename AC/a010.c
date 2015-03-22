#include <stdio.h>

int main()
{
	int keyin,i,j,y,k,p;
	
	while(scanf("%d",&keyin) != EOF)
	{
		k=0;
		p=keyin/2;
		for(i=2;i<=p;i++)
		{
			if(keyin%i == 0)
			{
				k++;
				j=0;
				if(k>1)
				{
					printf(" * ");
				}
				while(keyin%i==0)
				{
					keyin=keyin/i;
					j++;
					y=j;
				}
				if(y>1)
				{
					printf("%d^%d",i,y);
				}
				if(y==1)
				{
					printf("%d",i);
				}
			}
		}
		if(k==0)
		{
			printf("%d\n",keyin);
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
