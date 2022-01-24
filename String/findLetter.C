#include <stdio.h>

int main() {
	

    char arrNum[100] = {0, };
    int i, j, check, size;
    scanf("%s", arrNum);
    
    for (i = 97; i < 123; i++)
    {
        j = 0; // 반복하면서 초기화.
        while (arrNum[j] != 0)
        {
            if (arrNum[j] == (char)i)
                break;
            j++;
        }
        if (arrNum[j] == (char)i) 
            printf("%d ", j);
        else 
            printf("-1 ");
    }
	return 0;
}