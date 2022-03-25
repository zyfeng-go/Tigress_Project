#include "/bin/tigress/3.1/tigress.h"
#include <stdio.h>

void init_tigress () {}

int z;
int sum(int x, int y, int q) {
	q = 10;
	z = x + y;
	return z;
}

int main() {
	int x = 6;
	int y = 9;
	int res = sum(x, y, 5);
	printf("The sum is %d.\n", res);
	return 0;
}