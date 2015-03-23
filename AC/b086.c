#include <stdio.h>

int main()
{
	int i;
	char in[200];
	while(scanf("%s",&in) != EOF)
	{
		int tot=0,cheak=0,zero=0;
		
		for(i=0;i<strlen(in);i++)
		{
			if(in[i]>='a' && in[i]<='z')
        	{
            	in[i]-='a'-'A';
        	}
        	
			if(in[i]>='A' && in[i]<='Z')
        	{
            	tot+=(int)in[i]-64;
        	}
			else
			{
				cheak=1;
				break;
			}
		}

		if(cheak!=1)
		{
			printf("%d\n",tot);
		}
		else if(in[0]=='0' && strlen(in)==1)
		{
			printf("\n");
		}
        else
        {
        	printf("Fail\n");
        }
	}
	return 0;
}

