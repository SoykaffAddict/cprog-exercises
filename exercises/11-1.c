#include <stdio.h>

int main(void)
{
	int i = 1, *p = &i;

	printf("%d\n", *p);
	//printf("%d\n", &p);	Invalid
	//printf("%d\n", *&p);	Invalid
	//printf("%d\n", &*p);	Invalid
	//printf("%d\n", *i);	Invalid
	//printf("%d\n", &i);	Invalid
	printf("%d\n", *&i); 	
	//printf("%d\n", &*i);	Invalid
}
