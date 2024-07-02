#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_print_c(char c) {
	write(1, &c, 1);
	return (1);
}


int main() {
    int r;
    int i;
    srand(time(NULL));

    for(i = 0; i < 100000; i++) {
        r = 127 + (rand() % 128);
        ft_print_c(r);
    }

    return 0;
}
