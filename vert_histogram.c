#include <stdio.h>
int main()
{
	int ndigit[10] = {0};
	int c;

	// Get the data first
	while ((c = getchar())!=EOF)
       	{
	if( c>'0' || c<'9' )
	{
		++ndigit[c-'0'];
	}
	}

	// Find the maximum value in the histogram and fix the height of the histogram 
	// based on that
	int max_num = -1;
	for(int i=0; i<10; i++)
	{
		if (ndigit[i]>max_num)
			max_num = ndigit[i];
	}
	int height = 2 * max_num;	

	for(int i=0; i<height; i++)
	{
		for(int j=0; j<10; j++)
		{
		if(ndigit[j]>=(height-i))
		{
			printf("# ");	

		}
		else {
		printf("  ");
		}
		}
		printf("\n");
	}
	for(int i=0; i<10; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
}
