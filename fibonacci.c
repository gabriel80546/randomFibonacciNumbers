#include <stdio.h>

int fib(int n);

int main() {

	for(int i = 0; i < 20; i++) {
		printf("fib(%i) = %i\n", i, fib(i));
	}
	return 0;
}

int fib(int n) {
	if(n < 0 || n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}
