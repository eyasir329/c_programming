#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	int last,sum, first = 0;
	last = num % 10;
	for (num = num; num != 0; num /= 10)
	{
		first = num;
	}
	sum = first + last;
	printf("%d\n", sum);
	return 0;
}
