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
			ans += fabs(xy - floor(xy+0.5)) / (m+n); //fabs�^�ǰѼƪ�����Ȧ^�Ǭ�double���A ; floor�V�U�h����� +0.5���N�O�|�ˤ��J 
		}
		printf("%.4lf\n",ans*10000);
	}
	return 0;
} 
