#include <stdio.h>

int main()
{
	int n,i,j;
    while(scanf("%d",&n) == 1&&n)
    {
        for(i=1;i<=n;i++)
        {
            for(j=n;j>=1;j--)
            {
				printf("%c",j>i?'_':'+');
            }
            printf("\n");
        }
    }
    return 0;
}
