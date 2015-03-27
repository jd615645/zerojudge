#include <stdio.h>

int main()
{
	int a,b,i,tot;
    while(scanf("%d %d",&a,&b) != EOF)
    {
    	tot=0;
        for(i=a;i<=b;i++)
        {
            if(i%2==0) tot++;
        }
        printf("%d\n",tot);
    }
    return 0;
}
