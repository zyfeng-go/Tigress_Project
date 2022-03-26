#include "/bin/tigress/3.1/tigress.h"
#include <stdio.h>

void init_tigress () {}

int mul(int x) {
	return x * 4;
}

int sum(int x, int y) {
	x = mul(x);
	return x + y;
}

int main() {
	int x = 6;
	int y = 9;
	int z = sum(x, y);
	printf("The sum is %d.\n", z);
	return 0;
}
