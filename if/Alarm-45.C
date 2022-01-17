#include <stdio.h>
int main(void)
{
    int hour, min;
    scanf("%d %d", &hour, &min);

    if (min < 45)
    {
    	hour = hour > 0 ? hour-=1 : 23;
        min = 60 - (45 - min);
    }
    else
    {
        min -= 45;
    }
    
    printf("%d %d", hour, min);
}