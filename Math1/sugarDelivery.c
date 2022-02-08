#include <stdio.h>

int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);
						 //18 4  6
	printf("%d\n", n/3); // 6 1 2
	printf("%d\n", n/5); // 3 0 1
	printf("%d\n", n%3); // 0 1 0
	printf("%d\n", n%5); // 3 4 1
	
	cnt = (n/5 > n/3) ? n/3 : n/5;
	
	
	
	
	if (n/5 > 0)
	{
		cnt = n/5;
		n-= cnt*5;
		if (n > 0)
		{
			cnt+=(n/3);
		}
	}
	else if (n/3 > 0)
	{
		cnt = n/3;
		n-= cnt*3;
	}
	else
		cnt = -1;
	
	printf("%d\n", cnt);
}
