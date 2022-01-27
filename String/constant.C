#include <stdio.h>

int main() {
	
    int num1, num2, tmp, pow, con1 = 0, con2 = 0, j = 100, result; // con means converted.
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= 3; i++)
    {

        tmp = num1 % 10;
        con1 += tmp*j;

        tmp = num2 % 10;
        con2 += tmp*j;

        num1 /= 10;
        num2 /= 10;
        j/=10;
    }
	
	result = con1 >= con2 ? con1 : con2;
    printf("%d", result);

	return 0;
}