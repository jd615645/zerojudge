#include <stdio.h>
#include <math.h>
int main() 
{
	int a,b,c,ans1,ans2;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if((b*b)-4*a*c > 0)
		{
			ans1=((-1*b)+sqrt(b*b-4*a*c))/(2*a);
			ans2=((-1*b)-sqrt(b*b-4*a*c))/(2*a);
			printf("Two different roots x1=%d , x2=%d\n",ans1,ans2);
		}
		else if( ((b*b)-4*a*c) == 0)
		{
			ans1=((-1*b)+sqrt(b*b-4*a*c))/(2*a);
			printf("Two same roots x=%d\n",ans1);
		}
		else
		{
			printf("No real root\n");	
		}
	}
	return 0;
}
