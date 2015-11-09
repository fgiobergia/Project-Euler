/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>

#define	N	2000000

int is_prime (int n) {
	int i;
	for (i=2;i<=sqrt(n);i++) {
		if (!(n%i)) {
			return 0;
		}
	}
	return 1;
}

int main () {
	int i;
	long int sum;
	for (i=2,sum=0;i<N;i++) {
		if (is_prime(i)) {
			sum+=i;
		}
	}
	printf ("%ld\n",sum);
	return 0;
}
