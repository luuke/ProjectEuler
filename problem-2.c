#include <stdio.h>

int main(int argc, char* argv[])
{
	//Sum already 2 because  of seconds ( 2 ) term
	int sum = 2, old1 = 1, old2 = 2, new = 3;

	while(new <= 4000000)
	{
		if(new % 2 == 0) sum += new;
		old1 = old2;
		old2 = new;
		new = old1 + old2;
	}

	printf("Sum: %i\n", sum);

	return 0;
}
