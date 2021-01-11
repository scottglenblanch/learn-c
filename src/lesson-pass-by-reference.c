#include <stdio.h>
void increment(int* a){
	*a = (*a) + 1;
}
int main(int argc, const  char *argv[]) {
	
	int a = 1;

	printf("a = %d\naddress is = %d\n\n", a, &a);
	
	increment(&a);

	printf("a = %d\naddress is = %d\n\n", a, &a);

	return 0;
}

