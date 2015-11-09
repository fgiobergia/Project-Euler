/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_pal (int m) {
	int i,n,*v;
	n = (int)ceil(log10(m+1));
	v = malloc(n*sizeof(int));
	for (i=0;m;) {
		v[i++] = m % 10;
		m /= 10;
	}
	for (i=0;i<n/2;i++) {
		if (v[i] != v[n-i-1]) {
			free(v);
			return 0;
		}
	}
	free(v);
	return 1;
}

int main () {
	int i,j,max=0;
	for (i=999;i>=100;i--) {
		for (j=999;j>=100;j--) {
			if (max < i*j && is_pal(i*j)) {
				max = i*j;
			}
			if (max > i*999) {
				printf ("%d\n",max);
				return 0;
			}
		}
	}
	return 0;
}


