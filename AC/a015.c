#include <stdio.h>

int main()
{
    int row,column,i,j;
    while(scanf("%d %d",&row,&column) != EOF)
    {
        int ary[row][column];
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                scanf("%d",&ary[i][j]);
            }
        }


        for(i=0;i<column;i++)
        {
            for(j=0;j<row;j++)
            {
                printf("%d",ary[j][i]);
                printf("%s",(j==row-1?"":" "));
            }
            printf("\n");
        }
    }

    return 0;
}
