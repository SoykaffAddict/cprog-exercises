#include <stdio.h>
#include <unistd.h>

int main(void){
	int score=59;

	for (int i=0; i < 91; i++){
		printf("%d\t", score);
		score++;
		if (i >= 90)
			printf("A");
		else if (score >= 80)
			printf("B");
		else if (score >= 70)
			printf("C");
		else if (score >= 60)
			printf("D");
		else
			printf("F");

		if (i < 60)
			printf("F\n");
		else if (score < 70)
			printf("D\n");
		else if (score < 80)
			printf("C\n");
		else if (score < 90)
			printf("B\n");
		else
			printf("A\n");
	}

}
