#include <stdio.h>
int main() 
{
	int num,i;
	while(scanf("%d",&num)!=EOF)
	{
		int a[num][4];
		for(i=0;i<=num-1;i++)
		{
			scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
		}
		for(i=0;i<=num-1;i++)
		{
			if((a[i][2]-a[i][1])==(a[i][1]-a[i][0]))
				printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][3]+(a[i][1]-a[i][0]));
			else if((a[i][2]/a[i][1])==(a[i][1]/a[i][0]))
				printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][3]*(a[i][1]/a[i][0]));
		}		

	}
	return 0;
}
