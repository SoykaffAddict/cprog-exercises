#include <stdio.h>

int main(void){
	int num;

	printf("Enter a two-digit number: ");
	scanf("%2d", &num);


	if (num > 10 && num < 20){
		switch (num){
			case 11: printf("Eleven\n"); break;
			case 12: printf("Twelve\n"); break;
			case 13: printf("Thirteen\n"); break;
			case 14: printf("Fourteen\n"); break;
			case 15: printf("Fifteen\n"); break;
			case 16: printf("Sixteen\n"); break;
			case 17: printf("Seventeen\n"); break;
			case 18: printf("Eighteen\n"); break;
			case 19: printf("Nineteen\n"); break;
		}
	} else {
		switch (f){
			case 1: printf("Ten"); break;
			case 2: printf("Twenty"); break;
			case 3: printf("Thirty"); break;
			case 4: printf("Fourty"); break;
			case 5: printf("Fifty"); break;
			case 6: printf("Sixty"); break;
			case 7: printf("Seventy"); break;
			case 8: printf("Eighty"); break;
			case 9: printf("Ninety"); break;
		}

		switch (s){
			case 1: printf("-one"); break;
			case 2: printf("-two"); break;
			case 3: printf("-three"); break;
			case 4: printf("-four"); break;
			case 5: printf("-five"); break;
			case 6: printf("-six"); break;
			case 7: printf("-seven"); break;
			case 8: printf("-eight"); break;
			case 9: printf("-nine"); break;
		}
	}

	return 0;
}
