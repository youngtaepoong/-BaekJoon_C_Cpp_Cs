#include <stdio.h>

int main() {
	
    int a, b, c, result, num, cntArr[10] = {0, };
    scanf("%d\n%d\n%d", &a, &b, &c);
    result = a*b*c;

    while(result != 0)
    {
        num = result % 10;
        cntArr[num] += 1;
        result /= 10;
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", cntArr[i]);
    }

	return 0;
}