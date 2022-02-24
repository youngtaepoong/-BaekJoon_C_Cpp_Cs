#include <stdio.h>

int main(void)
{
    int n = 1, i, j;

    
    while (n > 0)
    {
        scanf("%d", &n);
		int check = 0;
        for (i = 1; i <= n; i++)
        {
			int buff = (int)sqrt(i);
			int cnt = 0;
           for (j = 2; j < buff; i++)
           {
               if (i % j == 0)
					check++;
           }
           if (check == 0 && i != 1)
           		cnt++;
           		
        	printf("%d\n", cnt);
        }
    }

}
