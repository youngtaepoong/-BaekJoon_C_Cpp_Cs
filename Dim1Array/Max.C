#include <stdio.h>

int main() {
	
    int numArr[9], max = 0, cnt;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &numArr[i]);
        if (max < numArr[i])
        {
            max = numArr[i];
            cnt = i+1;
        }
    }

    printf("%d\n%d", max, cnt);
	return 0;
}