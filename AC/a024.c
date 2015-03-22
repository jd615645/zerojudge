#include <stdio.h>

int main()
{
    int num_1,num_2,r;
    while( scanf("%d %d",&num_1,&num_2) != EOF)
    {
        int s=num_1*num_2;
        while(num_2 != 0)
        {
            r = num_1 % num_2;
            num_1=num_2;
            num_2=r;
        }
        printf("%d\n",num_1);
    }
    return 0;
}
