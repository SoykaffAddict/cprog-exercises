#include <stdio.h>

int main(void){
	int fm, fd, fy;
	int sm, sd, sy;
	int f_in_min, s_in_min;

	printf("Enter first date: ");
	scanf("%d/%d/%d", &fm, &fd, &fy);
	printf("Enter second date: ");
	scanf("%d/%d/%d", &sm, &sd, &sy);

	f_in_min = (fd * 24 * 60) + (fm * 24 * 60 * 30) + (fy * 24 * 60 * 30 * 12);
	s_in_min = (sd * 24 * 60) + (sm * 24 * 60 * 30) + (sy * 24 * 60 * 30 * 12);

	if (f_in_min < s_in_min){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", fm, fd, fy, sm, sd, sy);
	} else {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", sm, sd, sy, fm, fd, fy);
	}

}
