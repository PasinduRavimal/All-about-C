// C implementation of Naive method to print all divisors
#include <stdio.h>

// Function to print the divisors
void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);
}

// Driver code
int main()
{
	printf("The divisors of 100 are: ");
	printDivisors(100);

	return 0;
}
