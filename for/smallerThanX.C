#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int N, X;
    scanf("%d %d", &N, &X);
    
    int* arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    } 
    
    for (int i = 0; i < N; i++)
    {
    	if (arr[i] < X)
    		printf("%d ", arr[i]);
    } 
}