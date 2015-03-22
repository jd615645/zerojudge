#include <stdio.h>
void print_num(char x);
int main() 
{
	long long int time,i;
	while(scanf("%lld",&time) != EOF)
	{
		long long int num[time][3];
		
		for(i=0;i<time;i++)
		{
			scanf("%lld %lld %lld",&num[i][0],&num[i][1],&num[i][2]);
		}
		for(i=0;i<time;i++)
		{
			switch(num[i][0])
			{
				case 1:
					printf("%lld\n",num[i][1]+num[i][2]);
					break;
				case 2:
					printf("%lld\n",num[i][1]-num[i][2]);
					break;					
				case 3:
					printf("%lld\n",num[i][1]*num[i][2]);
					break;
				case 4:
					printf("%lld\n",num[i][1]/num[i][2]);
					break;
			}
		}
	}
	return 0;
}
