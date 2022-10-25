#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c,nw,state;
	state = OUT;
	nw = 0;
	while ((c = getchar())!=EOF) {
		if ((c==' ' || c=='\t' || c=='\n') && state==IN)
		{
			state = OUT;
			putchar('\n');
		}
		else if(c!=' ' && c!='\t' && c!='\n')  {
			putchar(c);
			state = IN;	
		}
	}
}
// Needs work. Not perfect yet.
