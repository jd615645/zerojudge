#include <stdio.h>
#define REP(i,n) for(i=0;i<n;i++)

int n;
char pos[10][10][10];
char view[6][10][10];

char read_char()
{
	char ch;
	ch=getchar();
	if((ch >= 'A') && (ch <= 'Z') || ch=='.') return ch;
}

void get(int k,int i,int j,int len,int &x,int &y,int &z)
{
	switch(k)
	{
		case 0:
			x=len;
			y=j;
			z=i;
			break;
		case 1:
			x=n-1-j;
			y=len;
			z=i;
			break;
		case 2:
			x=len;
			y=n-1-j;
			z=i;
			break;
		case 3:
			x=j;
			y=n-1-len;
			z=i;
			break;
		case 4:
			x=n-1-i;
			y=j;
			z=len;
			break;
		case 5:
			x=i;
			y=j;
			z=n-1-len;
			break;
	}
}

int main()
{
	return 0;
}
