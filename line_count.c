#include<stdio.h>

// Program that prints the no of lines from input
int main()
{
	int c;
	long nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;	
		}	
	}

	printf("The no of lines : %ld\n", nl);
}
