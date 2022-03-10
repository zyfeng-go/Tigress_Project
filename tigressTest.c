#include "/bin/tigress/3.1/tigress.h"
#include "/bin/tigress/3.1/jitter-amd64.c"

int sum(int x, int y) {
	return x + y;
}

int main() {
	
	int x = 6;
	int y = 9;
	int z = sum(x, y);
	printf("The sum is %d.\n", z);
	
	return 0;
}