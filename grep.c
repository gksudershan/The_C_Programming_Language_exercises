#include <stdio.h>
#define MAXLENGTH 1000

int getLine(char line[], int limit);

int containsPattern(char line[], char pattern[], int line_size, int pattern_size);

// Program that emulates the linux command "grep"
int main(int argc,char **argv)
{
	if (argc==1)
	{
		printf("Add the pattern you want to grep in the following way: \n");
		printf("Usage: ./a.out \"hello\" or ./a.out hello\n");
		return 0;
	}
	
	int len = 0;
	char line[MAXLENGTH], pattern[MAXLENGTH];
	int c,i=0;

	// Extracting the pattern from command line argument
	while ((c = argv[1][i])!='\0')
	{
		pattern[i]=c;
		i++;	
	
	}
	i=i-2;

	// While there is a line
	while ((len=getLine(line, MAXLENGTH)) > 0) {
	
		// if the line contains the pattern
		if (containsPattern(line, pattern, len, i))
			printf("%s", line);
	}
}


int getLine(char line[], int limit)
{
	int i=0;
	int c;
	while(i<(limit-1) && (c=getchar())!=EOF)
	{
		line[i] = c;
		i++;
		if (c=='\n')
			break;
	}
	line[i] = '\0';
	return i;
}

int containsPattern(char line[], char pattern[], int line_size, int pattern_size)
{
	// Use sliding window approach
	for(int i=0,j=0; i<(line_size-pattern_size+1); i++)
	{
		if(line[i]==pattern[j])
		{
			while (line[i+j]==pattern[j] && j<pattern_size)
			{
				j++;
				if(line[i+j]!=pattern[j])		
					break;
			}
			if(j==pattern_size)
			{
				return 1;
			}
			j=0;
		}
	}

	return 0;
}
