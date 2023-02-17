#include<stdib.h>
#include<time.h>
#include<stdio.h>
/**
 * main()
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
	int n;
	srand(time(n));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
