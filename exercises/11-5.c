#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total_sec = 43273;
	int hour, minute, second;
	
	split_time(total_sec, &hour, &minute, &second);

	printf("%d:%d:%d\n", hour, minute, second);


	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*sec = total_sec % 60;
	*min = (total_sec / 60 % 60);
	*hr = (total_sec / 60) / 60;
}
