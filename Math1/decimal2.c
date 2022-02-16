#include <stdio.h>

int main(void)
{
	int m, n, i, j, min = 1, sum = 0;
	
	scanf("%d\n%d", &m, &n);
	
	for (i = m; i <= n; i++)
	{
		for(j = 2; j < i; j++)
		{
			if (i % j == 0) break;
		}
		if (j == i)
		{
			if (min > sum) min = i;
			sum += i;
		}
	}
	
	if (sum != 0)
		printf("%d\n%d", sum, min);
	else
		printf("%d", -1);
}
