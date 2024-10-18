#include <stdio.h>

float compute_GPA(char *grades, int n);

int main(void){
	char grades[] = {'A', 'A', 'C', 'C'};

	printf("%.2f\n", compute_GPA(grades, sizeof(grades) / sizeof(grades[0])));

	return 0;
}

float compute_GPA(char *grades, int n){
	float total = 0;
	float elements = 0;

	for(int i = 0; i < n; i++, elements++){
		switch(grades[i]){
			case 'A': total += 4; break; 
			case 'B': total += 3; break; 
			case 'C': total += 2; break; 
			case 'D': total += 1; break; 
		}
	}

	return total / elements;
}
