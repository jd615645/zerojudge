#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (a)>(b)? (a):(b);

struct Node
{
    int b,j;
}J[1005];

int cmp(const void*a,const void*b)
{
    struct Node *c=(struct Node *)a;
    struct Node *d=(struct Node *)b;
    return c->j < d->j;
}

int main(void)
{
    int n,b,j,i,kase=1,sum,ans;
    while(scanf("%d",&n)==1&&n)
    {
        for(i=0;i<n;i++)
            scanf("%d%d",&J[i].b,&J[i].j);
        qsort(J,n,sizeof(J[0]),cmp);
        sum=0,ans=0;
        for(i=0;i<n;i++)
        {
            sum+=J[i].b;
            ans=max(ans,sum+J[i].j);
        }
        printf("Case %d: %d\n",kase++,ans);
    }
    return 0;
}
