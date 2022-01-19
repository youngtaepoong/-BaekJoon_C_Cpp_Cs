#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[80];
	int N, result = 0, score = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		result = 0;
		score = 1;
		scanf("%s", arr);

		for (int j = 0; j < strlen(arr); j++)
		{
			if(arr[j] == 'O')
			{
				result += score;
				score++;
			}
			if(arr[j] == 'X') score = 1;
		}
		printf("%d\n", result);
	}

    return 0;
}