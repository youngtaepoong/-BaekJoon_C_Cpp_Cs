#include <stdio.h>
// https://www.acmicpc.net/problem/2588
int main(){
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    
  
    printf("%d\n", input1 * (input2 % 10));
    printf("%d\n", input1 * ( (input2 % 100) / 10));
    printf("%d\n", input1 * (input2 / 100));
    printf("%d\n", input1*input2);
    
}