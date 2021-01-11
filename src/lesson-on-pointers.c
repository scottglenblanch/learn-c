#include <stdio.h>

int main(int argc, const  char *argv[]) {
	int a = 1;
	int *p = &a;
	printf("a = %d\naddress is = %d\n\n", a, p);

	return 0;
}

