#include <stdio.h>
#define IN 1
#define OUT 0

// A bare-bones version of UNIX's wc command
// This program prints the no of lines, words & characters till EOF
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nc = nw = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c=='\n')
		{
			++nl;
		}
		if (c==' ' || c=='\t' || c=='\n')
			state = OUT;
		else if (state == OUT) {
			++nw;
			state = IN;	
		}
	}
	printf("%d\t%d\t%d\n", nl, nw, nc);
}
