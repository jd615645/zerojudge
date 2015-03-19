#include <stdio.h>

int main()
{
    int in;
    while(scanf("%d",&in) != EOF)
    {
        int num[in],i,j,temp;
        for(i=0;i<in;i++)
        {
            scanf("%d",&num[i]);
        }

        for(i=0;i<in;i++)
        {
            for(j=i+1;j<in;j++)
            {
                if(num[i]>num[j])
                {
                    temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }
            }
        }

        for(i=0;i<in;i++)
        {
            printf("%d",num[i]);
            if(i<in-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
