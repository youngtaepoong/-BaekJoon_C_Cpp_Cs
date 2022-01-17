#include <stdio.h>

int main(void)
{
    int num, fir, sec;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        scanf("%d %d", &fir, &sec);
        printf("Case #%d: %d + %d = %d\n", i, fir, sec, fir+sec);
    } 
}