#include <stdio.h>

void insert_spaces(int quantity){
	for(int i=0; i < quantity; i++){
		printf(" ");
	}
}

int main(void){
	insert_spaces(8);
	printf("*\n");
	insert_spaces(7);
	printf("*\n");
	insert_spaces(6);
	printf("*\n");

	printf(" *   * \n");
	printf("  * *  \n");
	printf("   *   \n");
	return 0;
}
