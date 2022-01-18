#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, score;
    double result = 0.0, max = 0.0;
    scanf("%d", &num);

    double *arr = (double*)malloc(sizeof(double)*num);
    

    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &arr[i]); // 띄어쓰기 하지 말것.
        if (max < arr[i])    max = arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        if (max > arr[i]) 
            result += (arr[i]/max * 100.0);
        else
            result += max;
    }

    free(arr);
    printf("%lf\n", result/num);
}

/*
#include <stdio.h>
int main() {
	float score[1000],high=0,total=0;
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%f", &score[i]);
		if (high < score[i]) high = score[i];
	}
	for (int j = 0; j < N; j++) {
		score[j] = score[j] / high * 100.0;
		total += score[j];
	}
	printf("%f", total /N);
    return 0;
}
*/