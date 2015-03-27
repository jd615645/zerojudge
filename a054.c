#include <stdio.h>

int main()
{
	char id_num[9];
	int eng[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	int i;
    
	for(i=0;i<26;i++)
    {
       	eng[i]=eng[i]/10+(eng[i]%10)*9;
    }
    
	while(scanf("%s",id_num) != EOF)
    {
        int tot=0;
        
        for(i=0;i<8;i++)
        {
			tot+=(id_num[i]-'0')*(8-i);
        }

        int cheak=id_num[8]-'0';
        if(cheak==0) cheak=0;
        
		for(i=0;i<26;i++)
        {
        	if(10-(tot+eng[i])%10 == cheak)
			{
				printf("%c",(char)'A'+i);
			}
        }
        printf("\n");
    }
    return 0;
}
