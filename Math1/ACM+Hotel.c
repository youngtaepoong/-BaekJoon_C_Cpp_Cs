#include <stdio.h>

int main(void)
{
	int h, w, n, input, i, cnt, room, result;
	scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		cnt = n / h;	// 1 2
		room = n % h;	// 4 12
		
		if (room == 0)
			result = h*100+cnt;
		else
			result = room*100+cnt+1;
		
		printf("%d\n", result);
	}

}

