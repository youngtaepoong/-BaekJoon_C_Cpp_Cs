#include <stdio.h>
int main() 
{
	float score[1000], average = 0.0, result = 0.0, percent = 0.0;
	int N, cnt = 0, above = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &cnt);	
		for (int j = 0; j < cnt; j++) 
		{
		scanf("%f", &score[j]);
		result += score[j];
		}
		average = result/cnt;

		for (int k = 0; k < cnt; k++)
		{
			if (score[k] > average) above +=1;
			percent = above / (float)cnt * 100;
		}
		average = 0.0;
		result = 0.0;
		above = 0;
		printf("%.3f%%\n", percent);
	}
    return 0;
}