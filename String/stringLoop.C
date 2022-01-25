#include <stdio.h>
#include <string.h>

int main() {
	
    int n, i, j, k, cnt; // A = ±ÛÀÚ.
    scanf("%d", &n);
    char arrStr[20];

    for (i = 0; i < n; i++) // 2
    {
        scanf("%d ", &cnt);
        scanf("%s", arrStr);
        for(j = 0; j < strlen(arrStr); j++) // 3
        {
           	for (k = 0; k < cnt; k++)
		    {
		   		printf("%c", arrStr[j]);
			} 
        }
        printf("\n");
    }
    
	return 0;
}