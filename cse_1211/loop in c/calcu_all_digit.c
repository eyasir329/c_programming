#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	int mod, sum = 0;
	for (num = num; num != 0; num /= 10)
	{
		mod = num % 10;
		sum = sum + mod;
	}
	printf("%d\n", sum);
	return 0;
}

