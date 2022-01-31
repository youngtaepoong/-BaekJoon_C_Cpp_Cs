#include <stdio.h>
// Time out Solution

int main() {
	
    int input[3], result, cnt = 0;
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    if (input[1] >= input[2])
        cnt = -1;
    else
    {
        while(input[0] >= 0)
        {
        input[0] += (input[1]);
        input[0] -= (input[2]);
        cnt += 1;
        }
    }

    printf("%d", cnt);

	return 0;
}