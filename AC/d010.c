#include <stdio.h>

int main()
{
    int n,i;
	while(scanf("%d",&n) != EOF)
    {
    	int sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0) sum+=i;
		}
		
		if(sum>n)
		{
			printf("�ռ�\n");
		}
		else if(sum<n)
		{
			printf("����\n");
		}
		else
		{
			printf("������\n");
		}
    }
    return 0;
}
