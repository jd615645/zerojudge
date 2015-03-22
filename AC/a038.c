#include <stdio.h>

int main()
{
    char num[1000000];
    int i;
    while(scanf("%s",&num) != EOF)
    {
    	int start=strlen(num)-1,end=0;
    	while(1)
    	{
    		if(num[end]-'0'!=0)
    		{
    			break;
    		}
			end++;
    	}

    	while(1)
    	{
    		if(num[start]-'0'!=0)
    		{
    			break;
    		}
			start--;
    	}
    	
		for(i = start ;i >= end ;i--)
		{
			printf("%c",num[i]);
		}
		
		if(strlen(num)==end)
		{
			printf("0");
		}
		printf("\n");
    }

    return 0;
}

