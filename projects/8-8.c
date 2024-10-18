#include <stdio.h>

int main(void){
	int student_total_score[5];
	int q_total_score[5], q_high_score[5] = {0}, q_low_score[5];
	float q_avg_score[5], student_avg_score[5];

	int grades[5][5];

	for(int i = 0; i < 5; i++){
		printf("Enter the grades for student %d: ", i + 1);
		scanf("%d %d %d %d %d", &grades[i][0], 
								&grades[i][1],
								&grades[i][2],
								&grades[i][3],
								&grades[i][4]);
	}

	//Student scores
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			student_total_score[x] += grades[x][y];
			student_avg_score[x] = student_total_score[x] / 5.0f;
		}
	}

	//Quiz scores
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			q_total_score[x] += grades[y][x];
			q_avg_score[x] = q_total_score[x] / 5.0f;

			if(q_low_score[x] > grades[x][y] || q_low_score[x] == 0){
				q_low_score[x] = grades[x][y];
			}
			
			if(q_high_score[x] < grades[x][x] || q_high_score[x] == 0){
				q_high_score[x] = grades[x][y];
			}
		}
	}

	printf("Students Scores\n");
	for(int i = 0; i < 5; i++){
		printf("====================\n");
		printf("Student %d: \n", i + 1);
		printf("    Total score: %d\n", student_total_score[i]);
		printf("    Average score: %.2f\n", student_avg_score[i]);

	}
	printf("====================\n");

	printf("\nQuiz Scores\n");
	for(int i = 0; i < 5; i++){
		printf("====================\n");
		printf("Quiz %d: \n", i + 1);
		printf("    Total score: %d\n", q_total_score[i]);
		printf("    Average score: %.2f\n", q_avg_score[i]);
		printf("    High score: %d\n", q_high_score[i]);
		printf("    Low score: %d\n", q_low_score[i]);
	}

	printf("====================\n");

	return 0;
}
