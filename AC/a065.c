#include <stdio.h>

int main()
{
	char in[7];
	int i,num;
	while(scanf("%s",&in) != EOF)
	{
		for(i=0;i<6;i++)
		{
			num=in[i+1]-in[i];
			printf("%d",num>0?num:num*(-1));
		}
		printf("\n");
	}
    return 0;
}
