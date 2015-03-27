#include <stdio.h>

int main()
{
	int hr,min;
	
	while(scanf("%d %d",&hr,&min) != EOF)
	{
		int time=hr*60+min;
		printf("%s\n",(450<=time && time<1020)?"At School":"Off School");
	}
	return 0;
}

