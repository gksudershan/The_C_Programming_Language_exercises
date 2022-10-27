#include <stdio.h>

int main()
{
	int c;
	long nc;
	while ((c = getchar())!=EOF)
	{
		++nc;
	}

	printf("The no of characters is %ld\n", nc);
}
