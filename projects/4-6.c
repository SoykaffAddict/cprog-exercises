#include <stdio.h>

int main(void){
	int arr[14];
	int first_sum, second_sum;
	int result;

	printf("Enter an EAN code: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
			&arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
			&arr[5], &arr[6], &arr[7], &arr[8],
			&arr[9], &arr[10], &arr[11]);

	first_sum = 
		arr[1] +
		arr[3] +
		arr[5] +
		arr[7] +
		arr[9] +
		arr[11];
		
	second_sum = 
		arr[0] +
		arr[2] +
		arr[4] +
		arr[6] +
		arr[8] +
		arr[10];


	result = (first_sum * 3 + second_sum - 1) % 10 - 9;

	printf("%d\t%d\n", first_sum, second_sum);
	printf("Check digit: %d\n", -result);

	return 0;
}
