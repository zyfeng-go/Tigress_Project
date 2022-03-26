#include "/bin/tigress/3.1/tigress.h"
#include <stdio.h>
#include<unistd.h>
#include<sys/time.h>

void init_tigress () {}

int sum(int x, int y) {
	int z = getpid(); 
	printf("PID: %d\n", z);
	return x + y;
}

int main() {
	int x = 6;
	int y = 9;
	int z = sum(x, y);
	printf("The sum is %d.\n", z);
	return 0;
}