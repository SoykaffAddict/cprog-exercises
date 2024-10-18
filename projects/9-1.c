#include <stdio.h>

int largestPos(int *array, int size);
int swapPos(int *array, int size, int from, int to);
int selectionSort(int *array, int size);
void showArray(int *array, int size);

int main(void){
	int array[] = {8, 3, 12, 5, 10};
	int array_size = sizeof(array) / sizeof(array[0]);

	selectionSort(array, array_size-1);
	showArray(array, array_size);

	return 0;
}

int selectionSort(int *array, int size){
	int l = largestPos(array, size);
	if(size == 0){
		return 0;
	} 
	int i = swapPos(array, size, l, size);

	/*
	printf("\n%d %d\n", l, size);
	printf("!!%d!!", i);
	*/

	return selectionSort(array, size - 1);
}


void showArray(int *array, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}

	printf("\n");
}

int swapPos(int *array, int size, int from, int to){
	if(from  < 0 || to < 0){
		return 1;
	} else if(from  > size || to > size){
		return 2;
	}

	int temp = array[from];
	array[from] = array[to];
	array[to] = temp;

	return 0;
}

int largestPos(int *array, int size){
	int result = array[0];
	int position = 0;

	for(int i = 0; i < size; i++){
		if(array[i] > result){
			result = array[i]	;
			position = i;
		}
	}

	return position;
}
