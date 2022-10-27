#include <stdio.h>
#define IN 1
#define OUT 0

// Program that prints its input one word per line
int main()
{
	int c,state;
	state = OUT;

	while ((c = getchar())!=EOF)
	{
		if (state==IN && (c==' ' || c=='\n' || c=='\t'))
		{
			state = OUT;
			putchar('\n');
		}
		else if (c!=' ' && c!='\n' && c!='\t')
		{
			state = IN;
			putchar(c);
		}
	}
}
