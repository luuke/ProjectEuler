#include <math.h>
#include <stdio.h>

int isPrime(int num);

int main(int argc, char* argv[])
{
	unsigned long long int i, numRoot, highestFactor = 1, number = 600851475143;

	numRoot = (unsigned long long int) sqrt(number);

	for(i = 3; i < numRoot; i+=2)
	{
		if(number % i == 0)
		{
			if(isPrime(i) == 1)
			{
				highestFactor = i;
			}
		}
	}

	printf("Highest prime factor: %llu\n", highestFactor);

	return 0;
}

int isPrime(int num)
{
	int i;

	for (i = 2; i <= num-1; i++)
	{
		if(num % i == 0) return 0;
	}
	if (i == num) return 1;
}
