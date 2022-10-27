#include <stdio.h>
#define MAX_LENGTH 1000

// Fn that copies characters from current to longest array
void copy (char longest[], char current[])
{
	int i=0;
	while ((longest[i]=current[i]) != '\0')
	{
	i++;
	}
}

// Program that prints the longest line using arrays & function
int main()
{
	long l=0,max_ = 0;
	char line[MAX_LENGTH], res[MAX_LENGTH];
	int c;

	int i=0;
	while((c = getchar()) != EOF && i<(MAX_LENGTH - 1))
	{
		line[i]	=c;
		++l, ++i;
		if (c == '\n')
		{
			if(max_<l)	
			{
				line[i] = '\0';
				max_ = l;
				copy(res, line);
			}
			l = i = 0;
		}
	}
	if (max_<l)
	{
		line[i] = '\0';
		max_ = l;
		copy(res, line);
	}

	printf("\nThe longest line is %s\n", res);
}
