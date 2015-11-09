/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
#include <math.h>

#define	N	10001

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
	int i,n;
	for (i=2,n=0;;i++) {
		if (is_prime(i)) {
			n++;
			if (n == N) {
				printf ("%d\n",i);
				break;
			}
		}
	}
	return 0;
}

