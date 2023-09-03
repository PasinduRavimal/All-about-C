// C Program to check for prime number using Naive Approach
#include <stdio.h>

// Function to check prime number
void checkPrime(int N)
{
	// initially, flag is set to true or 1
	int flag = 1;

	// loop to iterate through 2 to N/2
	// This can be further optimized. See the Prime_numbers.c code
	for (int i = 2; i <= N / 2; i++) {

		// if N is perfectly divisible by i flag is set to 0 i.e false
		if (N % i == 0) {
			flag = 0;
			break;
		}
	}

	// Or you can add this printing part to the prime check loop also which would optimize the code more
	if (flag) {
		printf("The number %d is a Prime Number\n", N);
	}
	else {
		printf("The number %d is not a Prime Number\n", N);
	}

	return;
}

// driver code
int main()
{
	int N = 546;

	checkPrime(N);

	return 0;
}
