#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, sum = 0;

	for(i = 3; i < 1000; i += 3)
	{
		sum += i;
	}

	for(i = 5; i < 1000; i += 5)
	{
		//Add numbers that were not yet added
		if((i % 3) != 0) sum += i;
	}

	printf("Sum: %i\n", sum);

	return 0;
}
