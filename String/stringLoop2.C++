#include <stdio.h>

int main() {
	
    int n, i, j, k, cnt;
    scanf("%d", &n);
    char arrStr[20];

    for (i = 0; i < n; i++)
    {
        scanf("%d ", &cnt);
        scanf("%s", arrStr);

        for(j = 0; j < cnt; j++)
        {
            k = 0;
            while (arrStr[k] != 0)
            {
                if (arrStr[k] != )
                printf("%c", arrStr[]);
                k++;
            }
        }
        printf("\n");
    }
    
	return 0;
}