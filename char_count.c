#include <stdio.h>

// Program that prints no of characters from input till EOF
int main()
{
	int c;
	long nc;

	while ((c = getchar()) != EOF)
	{
		++nc;	
	}

	printf("The no of characters till EOF is:  %ld\n", nc);
}
