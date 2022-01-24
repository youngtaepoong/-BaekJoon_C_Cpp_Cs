#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    char arrNum[100] = {0, };
    int sum = 0;
    scanf("%s", arrNum);
    
    
    for (int i = 0; i < n; i++)
    {
        sum += arrNum[i] - '0';
    }
	
	printf("%d\n", sum);
	return 0;
}