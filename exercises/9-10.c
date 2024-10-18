#include <stdio.h>
#include <string.h>

int largestN(int *array, int length);
float averageN(int *array, int length);
int positiveN(int *array, int length);

int main(void){
	int arr[] = {7, 4};
	int larg = largestN(arr, sizeof(arr) / sizeof(arr[0]));
	float avg = averageN(arr, sizeof(arr) / sizeof(arr[0]));
	int pstv = positiveN(arr, sizeof(arr) / sizeof(arr[0]));

	printf("%d\n", larg);
	printf("%.2f\n", avg);
	printf("%d\n", pstv);
	return 0;
}


int largestN(int *array, int length){
	int largest = array[0];

	for(int i = 0; i < (length - 1); i++){
		if(array[i] > largest){
			largest = array[i];
		}
	}

	return largest;
}

float averageN(int *array, int length){
	float total = 0;
	float elements = 0;

	for(int i = 0; i < length; i++, elements++){
		total += array[i];
	}

	return total / elements;
}

int positiveN(int *array, int length){
	int positives = 0;

	for(int i = 0; i < length; i++){
		if(array[i] >= 0) positives++;
	}

	return positives;
}
