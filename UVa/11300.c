#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,temp;
    long long a[100000],b[100000],tot,m;
    
	while(scanf("%d" , &n) != EOF)
    {
    	tot=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            tot+=a[i];        	
        }

        m=tot/n;
        b[0]=0;
        
        for(i=0;i<n;i++) b[i]=b[i-1]+a[i]-m;

		for(i=0;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
		
        long long x1=b[n/2],ans=0;
        for(i=0;i<n;i++) ans+=abs(x1 - b[i]);
        
        printf("%lld\n",ans);
    }
    
    return 0;
}
