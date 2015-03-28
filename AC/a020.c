#include <stdio.h>

int main()
{
    char id[10];
    int tot,i,id_num[11];
    int chg[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    while(scanf("%s",id) != EOF)
    {
        tot=0;
        if(id[0]>='a' && id[0]<='z')
        {
            id[0]-='a'-'A';
        }

        id_num[0]=chg[id[0]-'A']/10;
        id_num[1]=chg[id[0]-'A']%10;

        for(i=2;i<11;i++)
        {
            id_num[i]=id[i-1]-'0';
        }
        tot=id_num[0];
        for(i=1;i<10;i++)
        {
            tot+=id_num[i]*(10-i);
        }

        printf("%s\n",((tot+id_num[10])%10!=0)?"fake":"real");
    }

    return 0;
}

