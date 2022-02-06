#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n); 
	
	int i = 1;
	while (n > i)
	{
		n-=i;
		i++;
	}
	
	if (i % 2 == 1)
		printf("%d/%d", i+1-n, n);
	else
		printf("%d/%d", n, i+1-n);
}
