#include <stdio.h>

// Program that prints the longest line length using getchar
int main()
{
	int c;
	long l=0,max_len = 0;
	while ((c = getchar())!= EOF)
	{
		++l;
		if (c == '\n')
		{
			if (max_len<l)
			{
				max_len = l;		
				l = 0;
			}
		}
		putchar(c);
	}	
	if (max_len<l)	
	{
		max_len = l;
		printf("\n");
	}
	printf("The length of the longest line is %ld\n",max_len);
}
