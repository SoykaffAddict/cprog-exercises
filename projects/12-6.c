#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int *split(int a[], int low, int high);

int main(void) {
	int a[N], i;

	printf("Enter %d numbers to be sorted: ", N);
	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	quicksort(a, 0, N - 1);

	printf("In sorted order: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}

void quicksort(int a[], int low, int high) {
	int *middle;

	if(low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, *middle - 1);
	quicksort(a, *middle + 1, high);
}

int *split(int a[], int low, int high){
	int *part_element = &a[low];
	int *h = &a[high];
	int *l = &a[low];

	while(1){
		while(l < h && *part_element <= *h)	{
			h--;		
		}

		if(l >= h) break;
		*l++ = *h;

		while(l < h && *l <= *part_element){
			l++;	
		}

		if(l >= h) break;
		*h-- = *l;

	}

	*h = *part_element;

	return h;
}
