#include <stdio.h>

void sort(int x[],int a);
int main()
{
	int n,m,i;
	while(scanf("%d %d",&n,&m) == 2 && n && m)
	{
		int D[20000],H[20000],head=0,money=0;
		for(i=0;i<n;i++) scanf("%d",&D[i]);
		for(i=0;i<m;i++) scanf("%d",&H[i]);
		sort(D,n);
		sort(H,m);
		
		for(i=0;i<m;i++)
		{
			if(H[i] >= D[head])
			{
				money+=H[i];
				if(++head==n) break;
			}
		}
		if(head<n)
		{
			printf("Loowater is doomed!\n");
		}
		else
		{
			printf("%d\n",money);
		}
	}
	return 0;
}

void sort(int x[],int a)
{
	int i,j,temp;
	
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
