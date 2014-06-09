#include <stdio.h>

int main()
{
	const int AMOUNT = 100;
	int price = 0;

	printf("Please input amount($):");
	scanf("%d", &price);

	int change = AMOUNT - price;

	printf("Your change is %d\n", change);

	return 0;
}
