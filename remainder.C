#include <stdio.h>
// https://www.acmicpc.net/problem/2588
int main(){
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    
    for (int i = 1; i <= 100; i*=10)
    {
        printf("%d\n", input1 * (input2 % i));
    }
}