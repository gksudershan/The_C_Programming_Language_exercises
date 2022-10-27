#include <stdio.h>

// Program that outputs a horizontal histogram based on frequencies of digits input
int main()
{
	int ndigit[10] = {0};
	int c;
	
	// Get the data first
	while ((c = getchar()) != EOF)
       	{
	if( c>'0' || c<'9' )
	{
		++ndigit[c-'0'];
	}
	}

	// Output the histogram
	printf("\nThe horizontal histogram: \n");
	for(int i=0; i<10; i++)
	{
		printf("%d\t ", i);
		for(int j=0; j<ndigit[i]; j++)
		{
			printf("|");	
		}
		printf("\n");
	}
}
