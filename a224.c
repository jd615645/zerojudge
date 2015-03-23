#include <stdio.h>
#include <string.h>

int main()
{
	char text[1001];
	int i,j,cheak;
	while(scanf("%s",&text) != EOF)
	{
        j=strlen(text)-1;
        cheak=0;
        for(i=0;i<strlen(text)/2;i++)
        {
        	if(text[i])
            if(text[i] != text[j])
            {
                cheak = 1;
                printf("%c %c\n",text[i],text[j]);
                break;
            }
            j--;
        }
        printf("%s\n",(cheak==0?"yes !":"no..."));
	}
	return 0;
}

