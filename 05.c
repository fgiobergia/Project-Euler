/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

#define	N	20

int main () {
	int i,j;
	for (i=1;;i++) {
		for (j=2;j<N;j++) {
			if (i % j) {
				break;
			}
		}
		if (j == N) {
			printf ("%d\n",i);
			break;
		}
	}
	return 0;
}
