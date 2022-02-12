#include <stdio.h>

int main(void)
{
	int test, i, x, y, distance, move, cnt, sex;
	scanf("%d", &test);
	
	for (i = 0; i < test; i++)
	{
		scanf("%d %d", &x, &y);
		
		// 무조건 마지막은 1
		cnt = 0;
		move = 1;
		distance = y - x;
		
		sex = (distance - 2) % 2;
		
		while(distance > 0)
		{
			distance -= (move*=2);
			cnt+=2;
			
			if (distance <= move)
			{
				cnt = (distance % 2 == 0) ? cnt+2 : cnt+1;
				break;
			}
		}
		
		

		
		printf("%d\n", cnt);
	}
}
