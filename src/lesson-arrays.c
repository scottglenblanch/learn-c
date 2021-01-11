#include <stdio.h>

int main(int argc, const  char *argv[]) {
	
	int loopCount;
	int a[5];

	a[0] = 10;
	a[1] = 100;
	a[2] = 101;
	a[3] = 110;
	a[4] = 200;

	
	for( loopCount = 0; loopCount < 5; loopCount++ ) {
		printf("i is = %d\n\tarray a[i] = %d\n\t*(a + i) = %d\n\n", loopCount, a[loopCount], *(a + loopCount)); 
	
	}

	return 0;
}

