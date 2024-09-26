#include <stdio.h>

int main()
{

	int start = 0;
	int end = 1000;

	for (int i = start; i < end; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d,", i);
		}
	}

	return 0;
}