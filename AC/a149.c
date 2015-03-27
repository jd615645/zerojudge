#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,tot;
	char num[10];
	while(scanf("%d",&n) != EOF)
	{
		for(i=1;i<=n;i++)
		{
			tot=1;
			scanf("%s",num);
			for(j=0;j<strlen(num);j++)
			{
				tot*=num[j]-'0';
			}
			printf("%d\n",tot);
		}
	}
	return 0;
}
