#include <stdio.h>
int main() 
{
	int m,d;
	while(scanf("%d %d",&m,&d)!=EOF)
	{
		switch( (((m*2)+d)%3) )
		{
			case 0:
				printf("普通\n");
				break;
			case 1:
				printf("吉\n");
				break;
			case 2:
				printf("大吉\n");
				break;
		}
	}
	return 0;
}
