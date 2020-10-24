#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float price = 3.6;
	int weight = 4;

	double sum = (int)price * weight;

	printf("价格：%f元\n", sum);
	return 1;
}
