#include <stdio.h>

int main(void){
	int m = 200;

	for (int n = 0; m > 0; n++, m /= 2);

	printf("%d\n", m);
}
