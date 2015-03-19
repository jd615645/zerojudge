#include <stdio.h>

int main()
{
    int num[10][10],i,j,k,sum,sum1,cheak;
    while(scanf("%d",&num[1][1]) != EOF)
    {
        cheak=0;
        for(i=1;i<=9;i++)
        {
            for(j=((i==1)?2:1);j<=9;j++)
            {
                scanf("%d",&num[i][j]);
            }
        }

        for(i=1;i<=9;i++)
        {
            sum=1;
            sum1=1;
            for(j=1;j<=9;j++)
            {
                sum*=num[i][j];
                sum1*=num[j][i];
            }

            if((sum != 362880) || (sum1 != 362880))
            {
                cheak=1;
                break;
            }
        }

        for(k=1;k<=9;k+=3)
        {
            sum=1;
            for(i=k;i<=k+2;i++)
            {
                for(j=1;j<=3;j++)
                {
                    sum*=num[i][j];
                }
            }
            if(sum!=362880)
            {
                cheak=1;
                break;
            }
        }

        for(k=1;k<=9;k+=3)
        {
            sum=1;
            for(i=k;i<=k+2;i++)
            {
                for(j=4;j<=6;j++)
                {
                    sum*=num[i][j];
                }
            }
            if(sum!=362880)
            {
                cheak=1;
                break;
            }
        }

        sum=1;
        for(k=1;k<=9;k+=3)
        {
            sum=1;
            for(i=k;i<=k+2;i++)
            {
                for(j=7;j<=9;j++)
                {
                    sum*=num[i][j];
                }
            }
            if(sum!=362880)
            {
                cheak=1;
                break;
            }
        }

        printf("%s\n",(cheak==0?"yes":"no"));
    }
    return 0;
}
