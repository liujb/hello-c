#include "stdio.h"
#include "math.h"

/**
 * judge one number is prime number
 */
int main() {
	int n, i, j;
	printf("Please input a number: \n");
	scanf("%d", &n);

	j = sqrt(n);
	for (i = 2; i < j + 1; i++) {
		if (n % i == 0) {
			break;
		}
	}

	if (i > j) {
		printf("%d is a prime number \n", n);
	} else {
		printf("%d is not a prime number \n", n);
	}
}
