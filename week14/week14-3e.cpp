#include <stdio.h>
int main()
{
	printf("Enter two numbers: ");
	int x, y;
	scanf("%d %d", &x, &y);

	printf("The remainder is %d\n", x%y);
}
