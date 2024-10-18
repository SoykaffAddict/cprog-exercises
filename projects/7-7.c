#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(void){
	int num1, num2;
	int denom1, denom2;
	int result_num, result_denom;
	char operator;

	printf("Enter two fractions separated by an operator: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

	switch (operator){
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
		case '-':
			result_num = num1 - num2;
			result_denom = lcm(num1, denom2);
			break;
	}
	printf("The result is %d/%d\n", result_num, result_denom);

	return 0;
}
