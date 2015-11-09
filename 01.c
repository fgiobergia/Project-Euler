#include <stdio.h>

#define N	1000

int main () {
	int sum, i;
	for (i=0,sum=0;i<N;i++) {
		if (!(i%3) || !(i%5)) {
			sum += i;
		}
	}
	printf ("%d\n",sum);
	return 0;
}

