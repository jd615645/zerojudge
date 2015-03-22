#include <stdio.h>

int main()
{
    int num,i;
    while(scanf("%d",&num) != EOF)
    {
        if(num != 0)
        {
            for(i=1;i<num;i++)
            {
                if(i%7 != 0)
                {
                    printf("%d",i);
                    if(i!=num-1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}
