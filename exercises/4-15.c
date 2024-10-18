#include <stdio.h>

int main(void){
	int i=1, j=2;

	i += j;
	printf("%d %d\n", i, j);

	i--;
	printf("%d %d\n", i, j);

	i * j / i;
	printf("%d %d\n", i, j);

	i % ++j;
	printf("%d %d\n", i, j);
}
