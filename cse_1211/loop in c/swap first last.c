#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	int last,sum,temp, first = 0;
	last = num % 10;
	for (num = num; num != 0; num /= 10)
	{
		first = num;
	}
	sum = first + last;
	temp = last;
	last = first;
	printf("%d%d\n", temp,last);
	return 0;
}

