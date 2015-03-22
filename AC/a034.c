#include <stdio.h>

int main()
{
    long long int keyin;
    int ans[256];
    while(scanf("%lld",&keyin) != EOF)
    {
        int i=0,j;
        while(keyin != 0)
        {
            ans[i] = (keyin%2);
            i++;
            keyin/=2;
        }
        i--;
        for(i;i>=0;i--)
        {
            printf("%d",ans[i]);
        }

        printf("\n");
    }
    return 0;
}
