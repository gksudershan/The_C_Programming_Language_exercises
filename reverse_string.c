#include <stdio.h>
#define MAX_LENGTH 3

// Program to reverse input text line by line
int main()
{
	int c, i=0, l=0;
	char line[MAX_LENGTH+2];

	// Get input text and print the reversed text if newline or EOF is triggered
	while ((c = getchar())!= EOF && i<(MAX_LENGTH+1)){
		line[i] = c;
		++i, ++l;
		if (c=='\n')
		{
			for(int j=i-2; j>=0; j--)
				putchar(line[j]);
			putchar('\n');
			l=i=0;
		}
	}

	if (i>=(MAX_LENGTH+1)) {
		printf("\nMaximum length allowed is %d\n",MAX_LENGTH);
	}
	else
	{
		putchar('\n');
		for(int j=i-1; j>=0 ;j--)
			putchar(line[j]);
		putchar('\n');

	}
}
