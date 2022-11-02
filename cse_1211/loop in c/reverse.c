#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	int mod, reverse = 0;
	for (num = num; num != 0; num /= 10)
	{
		mod = num % 10;
		reverse = reverse * 10 + mod;
	}
	printf("%d\n", reverse);
	return 0;
}
