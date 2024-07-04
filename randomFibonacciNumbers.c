#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int fib(int n, int sinal);

int main() {

    srand(time(NULL));
	for(int i = 0; i < 40; i++) {
		// system("date");
		printf("fib(%i) = %i\n", i, fib(i, (rand() % 2)));
	}
	return 0;
}

int fib(int n, int sinal) {
	if(n < 0 || n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
        if (sinal == 0) {
		    return fib(n - 1, (rand() % 2)) + fib(n - 2, (rand() % 2));
        } else if (sinal == 1) {
		    return fib(n - 1, (rand() % 2)) - fib(n - 2, (rand() % 2));
        } else {
            printf("Erro: variavel sinal != 1 && != 0\n");
            exit(1);
        }
	}
}
