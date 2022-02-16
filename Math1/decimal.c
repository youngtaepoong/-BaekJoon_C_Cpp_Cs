#include <stdio.h>


int main(void)
{
	int test, n, i, j, cnt = 0;
	scanf("%d\n", &test);
	
	
	for(i = 0; i < test; i++) 
	{
		scanf("%d", &n);
		
		for(j = 2; j < n; j++)
		{
			if (n % j == 0) break;
		}
		if (j == n) cnt++;
	}
	printf("%d", cnt);
}
