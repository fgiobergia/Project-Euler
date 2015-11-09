/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>

int main () {
	int a,b,c;
	for (a=1;;a++) {
		for (b=1;b<1000-a;b++) {
			c = 1000 - a - b;
			if (a*a + b*b == c*c) {
				printf ("%d %d %d: %d\n",a,b,c,a*b*c);
				return 0;
			}
		}
	}
	return 0;
}

