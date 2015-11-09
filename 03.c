/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>

#define N	600851475143

int is_factor (long int number, long int factor) {
	return !(number % factor);
}

int main () {
	long int i,n;
	for (i = 2,n=N; n != 1; i++) {
		if (is_factor(n,i)) {
			n /= i;
			printf ("%ld\n",i);
		}
	}
	return 0;
}

