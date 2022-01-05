#include <stdio.h>

int main(){
	// https://www.acmicpc.net/problem/1008
    double input1; 
	double input2;
    scanf("%d %d", &input1, &input2);
    
    printf("%.13lf", (input1/input2));
}