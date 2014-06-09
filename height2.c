#include <stdio.h>

int main()
{
	printf("Please input the foot and inch:\n"
		"for example:\"5 7\"means 5 feet and 7 inches");

	double foot;
	double inch;

	scanf("%lf %lf", &foot, &inch);

	printf("Your height is %f meters\n", 
		((foot + inch / 12) * 0.3048));

	return 0;
}
