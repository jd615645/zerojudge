#include <stdio.h>

int p[46341]={2,3,5};
int p_cnt=3;

void build_prime();
int is_prime(int a);

int main()
{
	int in;
	build_prime();
	
	while(scanf("%d",&in) != EOF)
	{
		printf("%d\n",is_prime(in));
	}
		
	return 0;
}

void build_prime()
{
	int i,j;
	
	for(i=7,j=4; i<=46341 ; i+=j,j=6-j)
	{
		if(is_prime(i))
		{
			p[p_cnt]=i;
			p_cnt++;
		}
	}
}

int is_prime(int a)
{
	int i,j;
	for(i=0 ; i<p_cnt && p[i]*p[i]<=a ; i++)
	{
		if(a%p[i] == 0)
		{
			return 0;
		}
	}
	return 1;
}
