#include <stdio.h>

int main(void)
{
	int i = 1, *p = &i, *q = &i;

	//p = i;	Invalid;
	//*p = &i;	Invalid
	//&p = q;	Invalid
	//p = &q;	Invalid

	//p = *&q;	Valid;
	//p = q;	Valid

	//p = *q;	Invalid;
	//*p = q;	Invalid

	//*p = *q;	Valid;

}
