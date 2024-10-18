#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void){
	int arr[] = {1, 3, 2, 4, 2};

	printf("%d\n", has_zero(arr, sizeof(arr) / sizeof(arr[0])));

	return 0;
}

bool has_zero(int a[], int n){
	int i;

	for(i = 0; i < n; i++){
		if(a[i] == 0)
			return true;
		/* Code exits on first nonzero character instead of checking for all
		   nonzero characters before leaving

		else
			return false;
		*/
	}

	//Returning false at the end of the function ensures it only returns
	// false if no zeros are find
	
	return false;
}
