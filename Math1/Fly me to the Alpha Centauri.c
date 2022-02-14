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

		
		while(distance > 0)
		{
			if (distance < move)
				cnt -= 1;
			
			distance -= (move*2);
			cnt+=2;
			
			if (distance <= 0)
			{
				if (distance == -(move))
					cnt -= 1;
				break;
			}
			move++;
		}
		printf("%d\n", cnt);
	}
}
