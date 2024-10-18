#include <stdio.h>

int main(void){
	int input[16];
	int rows[4];
	int columns[4];
	int diagonals[2];

	printf("Enter the number from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
			&input[0],
			&input[1],
			&input[2],
			&input[3],
			&input[4],
			&input[5],
			&input[6],
			&input[7],
			&input[8],
			&input[9],
			&input[10],
			&input[11],
			&input[12],
			&input[13],
			&input[14],
			&input[15]);

	printf("%d %d %d %d\n", input[0], input[1], input[2], input[3]);
	printf("%d %d %d %d\n", input[4], input[5], input[6], input[7]);
	printf("%d %d %d %d\n", input[8], input[9], input[10], input[11]);
	printf("%d %d %d %d\n", input[12], input[13], input[14], input[15]);

	printf("\n");

	rows[0] = input[0] + input[1] + input[2] + input[3];
	rows[1] = input[4] + input[5] + input[6] + input[7];
	rows[2] = input[8] + input[9] + input[10] + input[11];
	rows[3] = input[12] + input[13] + input[14] + input[15];

	columns[0] = input[0] + input[4] + input[8] + input[12];
	columns[1] = input[1] + input[5] + input[9] + input[13];
	columns[2] = input[2] + input[6] + input[10] + input[14];
	columns[3] = input[3] + input[7] + input[11] + input[15];

	diagonals[0] = input[0] + input[5] + input[10] + input[15];
	diagonals[1] = input[3] + input[6] + input[9] + input[12];
	printf("%d\n", input[0]);

	printf("Row sums: %d %d %d %d\n", rows[0], rows[1], rows[2], rows[3]);
	printf("Column sums: %d %d %d %d\n", columns[0], columns[1], columns[2], columns[3]);
	printf("Diagonal sums: %d %d\n", diagonals[0], diagonals[1]);

	return 0;
}
