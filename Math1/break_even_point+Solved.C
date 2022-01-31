#include <stdio.h>

int main() {
	
    int input[3], result = 0, profit;
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    if (input[1] < input[2])
    {
        profit = input[2] - input[1];
        result = input[0] / profit + 1;
    }
    else
        result = -1;

    printf("%d", result);

	return 0;
}