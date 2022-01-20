#include <stdio.h>
// https://www.acmicpc.net/problem/1065
 void AP(int n)
{
    
    if (n<100)
        printf("%d",n);
    else
    {
        int i;
        int cnt;
        int fir, sec, thr;
        cnt = 99;
        for (i = 100; i <=n; i++)
        {
            fir = i / 100;
            sec = i / 10 % 10;
            thr = i % 10;
 
            if ((thr - sec) == (sec - fir))
                cnt++;
        }
        printf("%d", cnt);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    AP(n);
}
