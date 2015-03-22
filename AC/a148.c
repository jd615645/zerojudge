#include <stdio.h>

int main()
{
    int n,i,sco[100];
    float tot=0;
    while(scanf("%d",&n) != EOF)
    {
        tot=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&sco[i]);
        }
        for(i=0;i<n;i++)
        {
            tot+=sco[i];
        }
        tot/=n;
        printf("%s\n",(tot>59?"no":"yes"));
    }
    return 0;
}
