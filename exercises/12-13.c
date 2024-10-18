#include <stdio.h>

#define N 10

int main(void)
{
	double ident[N][N];
	int counter = N+1;
	/*
	int row, col;

	for (row = 0; row < N; row++)
		for (col = 0; col < N; col++)
			if (row == col)
				ident[row][col] = 1.0;
			else
				ident[row][col] = 0.0;
	*/


	for (double *p = &ident[0][0]; p <= &ident[N-1][N-1]; p++, counter++) {
		if (counter <= N) {
			*p = 0;
		} else {
			*p = 1;	
			counter = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf("%.0lf ", ident[j][i]);

		printf("\n");
	}
}
