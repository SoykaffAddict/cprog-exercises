#include <stdio.h>

int f(int a, int b);

int main(void){
	int i = f(83, 12);
	//double i = f(83, 12); Returns error
	int y = f(3.15, 9.28);
	//double y = f(3.15, 9.28); Return Error
	f(83,12);

	return 0;
}
