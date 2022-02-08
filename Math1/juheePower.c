#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int test, kfloor, nho, i, j, apart[15][15] = {0, };
	
	for (i = 0; i < 15; i++)
	{
		apart[0][i] = i; // 0ÃþºÎÅÍ ±ò±â 
	}
	for (i = 1; i < 15; i++)
	{
		for (j = 1; j < 15; j++)
		{
			apart[i][j] = apart[i-1][j] + apart[i][j-1];
		}
	}
	
	scanf("%d", &test);
	
	for (j = 0; j < test; j++)
	{
		scanf("%d\n %d", &kfloor, &nho);
		printf("%d\n", apart[kfloor][nho]);
	}
	
	return 0;

}

