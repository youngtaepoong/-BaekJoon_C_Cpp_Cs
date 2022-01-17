#include <stdio.h>

int main(void)
{
    int num, fir, sec;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &fir, &sec);
        printf("%d\n", fir+sec);
    } 
}