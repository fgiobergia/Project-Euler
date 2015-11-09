/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

#define	N	100

long int sum_of_squares (int n) {
	int i;
	long int sum;
	for (i=1,sum=0;i<=n;i++) {
		sum += i*i;
	}
	return sum;
}

long int square_of_sums (int n) {
	int i;
	long int sum;
	for (i=1,sum=0;i<=n;i++) {
		sum += i;
	}
	return sum*sum;
}

int main () {
	long int ssq,sqs;
	ssq = sum_of_squares(N);
	sqs = square_of_sums(N);
	printf ("%ld\n",sqs-ssq);
	return 0;
}
