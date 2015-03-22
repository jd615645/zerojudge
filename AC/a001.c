#include <stdio.h>
int main() 
{
	char text[100];
	while(scanf("%s",text)!=EOF)
	{
		printf("hello, %s\n",text);
	}
	return 0;
}
