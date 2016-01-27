#include <stdio.h>
#include <math.h>

int main()
{
	int n,m,i;
	while(scanf("%d %d",&n,&m) != EOF)
	{
		double ans=0.0;
		for(i=1;i<n;i++)
		{
			double xy=(double) (n+m)/n*i;
			ans += fabs(xy - floor(xy+0.5)) / (m+n); //fabs回傳參數的絕對值回傳為double型態 ; floor向下去取整數 +0.5其實就是四捨五入 
		}
		printf("%.4lf\n",ans*10000);
	}
	return 0;
} 
