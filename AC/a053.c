#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int score=0;

		if(n>=40)
		{
			score=100;
		}
		else if(n>20)
		{
			score=(n-20)+80;
		}
		else if(n>10)
		{
			score=(n-10)*2+60;
		}
		else
		{
			score=n*6;
		}
		
		printf("%d\n",score);
	}
    return 0;
}
